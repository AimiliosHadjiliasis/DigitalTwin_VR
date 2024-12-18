using SimpleJSON;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

namespace ChartsAndGraphs3D
{
    public class LineChart : MonoBehaviour
    {
        public TitleText TitleText;

        public Color LineColor;
        public Color AxisColor;

        float startTime = 0;
        SensorScript sensorScriptObj;
        /// <summary>
        /// Used if there are no values assigned via script
        /// Leave empty if you want a clean chart
        /// </summary>
        public List<float> StaticValues = new List<float>();

        public float playbackTimeLimit = 0;
        public float moveGraphTime;
        internal float _moveTime;
        int valueCounter = 0;

        public bool isLocalData = false;

        public List<float> storedValues = new List<float>();
        public List<double> storedTime = new List<double>();


        public List<float> _tempratureValues = new List<float>();
        public List<double> _tempratureTime = new List<double>();
        public List<float> _humidityValues = new List<float>();
        public List<double> _humidityTime = new List<double>();
        public List<float> _IAQValues = new List<float>();
        public List<double> _IAQTime = new List<double>();

        //public float liveValue;
        //public float liveTime;

        /// <summary>
        /// Only change if you realy need to
        /// else just resize the charts transform
        /// </summary>
        internal float BaseWidth = 8, BaseHeight = 4;

        /// <summary>
        /// The maximum value on the display (Y-Axis) => if 0 it is dynamic
        /// </summary>
        public float FixMaxYValue = 0;

        /// <summary>
        /// If reached it will delete the first values (FIFO) and "scroll"
        /// </summary>
        public float MaxValuesAmount = 30;


        /// <summary>
        /// When activated it thinns the lines on amount>50 -> so it is more readable
        /// </summary>
        public bool ThinLineIfManyValues = false;

        public bool Glow;

        public Lines_Y_AxisTextUnityHelper YAxis;
        public Lines_X_AxisTextUnityHelper XAxis;

        public LinesCurrentTextUnityHelper CurrentValueText;


        public GameObject Line, Point;

        List<Transform> currLines = new List<Transform>();
        List<Transform> currPoints = new List<Transform>();


        public Transform Background;
        public Transform AxisY, AxisX;

        float currMaxY;

        bool change;

        public List<float> valueList = new List<float>();
        //public List<float> Values
        //{
        //    get
        //    {
        //        if (values == null || values.Count == 0)
        //        {
        //            return StaticValues;
        //        }

        //        return values;
        //    }

        //    set
        //    {
        //        values = value;
        //        change = true;
        //    }
        //}

        LineRenderer lineRenderer;

        private void Awake()
        {
            sensorScriptObj = GetComponentInParent<SensorScript>();

            // Ensure we have a LineRenderer component
            lineRenderer = GetComponent<LineRenderer>();
            if (lineRenderer == null)
            {
                lineRenderer = gameObject.AddComponent<LineRenderer>();
            }

            // Set basic properties
            lineRenderer.useWorldSpace = false;     // Since we're placing the chart in local space
            lineRenderer.startColor = LineColor;
            lineRenderer.endColor = LineColor;
            lineRenderer.startWidth = 0.1f;
            lineRenderer.endWidth = 0.1f;
            // Assign a material that supports emission if you want Glow effect.
            // lineRenderer.material = YourMaterialWithEmission;
        }


        private void DefaulStart()
        {
            if (sensorScriptObj.currentDataName != DataType.Historical.ToString()) return;

            if (valueList.Count != 0)
            {
                currMaxY = valueList.Max();
            }
            UpdateAxis();
            change = true;
            UpdateLineChart();
            HandleGlows(new List<Transform>() { AxisX, AxisY }, !Glow, AxisColor);     //To make sure it s set correct
            HandleGlows(new List<Transform>() { AxisX, AxisY }, Glow, AxisColor);      //To make sure it s set correct
            TitleText.Create(transform, TitlePositionMethod, LookAtMethod);
        }

        private Vector3 TitlePositionMethod()
        {
            return new Vector3(0, BaseHeight * 1.1f, 0) + TitleText.PositionOffset;
        }

        private Vector3 LookAtMethod()
        {
            return transform.forward;
        }

        double lastHeight, lastWidth, lastMaxY, LastMaxX;
        private void UpdateAxis()
        {
            UpdateCurrentTextHeight();

            if (lastHeight == BaseHeight && lastWidth == BaseWidth && lastMaxY == currMaxY && LastMaxX == XAxis.MarkMax)
                return;

            lastHeight = BaseHeight;
            lastWidth = BaseWidth;
            lastMaxY = currMaxY;

            AxisY.localScale = new Vector3(AxisY.localScale.x, BaseHeight, AxisY.localScale.z);
            AxisY.localPosition = new Vector3(AxisY.localPosition.x, BaseHeight / 2, AxisY.localPosition.z);

            AxisX.localScale = new Vector3(BaseWidth, AxisX.localScale.y, AxisX.localScale.z);
            AxisX.localPosition = new Vector3(BaseWidth / 2, AxisX.localPosition.y, AxisX.localPosition.z);

            Background.localScale = new Vector3(BaseWidth, BaseHeight, 0.05f);
            Background.localPosition = new Vector3(BaseWidth / 2, BaseHeight / 2, 0.05f);

            UpdateTexts();
        }

        private void UpdateCurrentTextHeight()
        {
            if (CurrentValueText.currentObject != null && (CurrentValueText.AimPos - CurrentValueText.currentObject.transform.localPosition).magnitude > 0.2f)
                CurrentValueText.currentObject.transform.localPosition += (CurrentValueText.AimPos - CurrentValueText.currentObject.transform.localPosition) * Time.deltaTime;
        }

        bool lastGlow;          //Only used in the Method below
        Color lastAxisColor;
        // Update is called once per frame
        void Update()
        {
            if (sensorScriptObj.currentDataName != DataType.Historical.ToString()) return;

            UpdateAxis();
            UpdateLineChart();

            HandleGlows(currLines, Glow, LineColor);
            HandleGlows(currPoints, Glow, LineColor);

            if (lastGlow == Glow && lastAxisColor == AxisColor)
                return;

            lastGlow = Glow;
            lastAxisColor = AxisColor;

            HandleGlows(new List<Transform>() { AxisX, AxisY }, Glow, AxisColor);
        }

        void UpdateTexts()
        {
            //max y text
            if (YAxis.AxisText != "")
            {
                Transform nParent;
                GameObject text3Dobj;
                if (YAxis.currentObject != null)
                {
                    nParent = YAxis.currentObject.transform;
                    text3Dobj = nParent.Find("3DText(Clone)").gameObject;
                }
                else
                {
                    nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
                    text3Dobj = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
                }

                nParent.transform.localPosition = new Vector3(AxisY.localPosition.x * 1.05f, BaseHeight * 1.05f, 0);
                nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
                nParent.localScale /= nParent.localScale.magnitude;

                text3Dobj.GetComponent<TextMesh>().text = YAxis.AxisText;
                text3Dobj.transform.localScale = new Vector3(YAxis.Scale, YAxis.Scale, YAxis.Scale);
                text3Dobj.transform.LookAt(text3Dobj.transform.position + Background.forward);
                //text3Dobj.GetComponent<TextMesh>().anchor = TextAnchor.LowerCenter;
                YAxis.currentObject = nParent.gameObject;

            }

            //max x text
            if (XAxis.AxisText != "")
            {
                Transform nParent;
                GameObject text3Dobj;
                if (XAxis.currentObject != null)
                {
                    nParent = XAxis.currentObject.transform;
                    text3Dobj = nParent.Find("3DText(Clone)").gameObject;
                }
                else
                {
                    nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
                    text3Dobj = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
                }

                nParent.transform.localPosition = new Vector3(BaseWidth * 1.02f, 0, 0);
                nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
                nParent.localScale /= nParent.localScale.magnitude;

                text3Dobj.GetComponent<TextMesh>().text = XAxis.AxisText;
                text3Dobj.transform.localScale = new Vector3(XAxis.Scale, XAxis.Scale, XAxis.Scale);
                text3Dobj.transform.LookAt(text3Dobj.transform.position + Background.forward);
                XAxis.currentObject = nParent.gameObject;
            }

            // x axis marks
            foreach (var item in XAxis.MarkList)
            {
                Destroy(item.gameObject);
            }
            XAxis.MarkList.Clear();

            // We assume storedTime has a collection of times in hours (0 to 24).
            // If you need a larger time span (like multiple days), you should adjust logic accordingly.
            // If storedTime is empty, skip this step or show no marks.
            if (storedTime.Count > 0)
            {
                float xDiffPerMark = BaseWidth / XAxis.MarkCount;

                // Determine the range of time from the data
                double minTime = storedTime.Min();
                double maxTime = storedTime.Max();

                // If startTime is stored as hours in storedTime, you can use that directly.
                // Otherwise, if you have a DateTime for the earliest data point, you can reconstruct times:
                // For demonstration, assume minTime and maxTime are hours of the day and we want to display them:
                double timeRange = maxTime - minTime;

                for (int i = 1; i <= XAxis.MarkCount; i++)
                {
                    Transform nParent;
                    GameObject text, mark;
                    nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
                    text = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
                    mark = Instantiate(Resources.Load("ChartsAndGraphs3D/AxisMark"), nParent) as GameObject;

                    // Position the mark evenly along the X-axis
                    nParent.transform.localPosition = new Vector3(i * xDiffPerMark, 0, 0);
                    nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
                    nParent.localScale /= nParent.localScale.magnitude;

                    // Calculate the time for this mark
                    double markTime = minTime + (timeRange / (XAxis.MarkCount + 1)) * i;

                    // Convert markTime (which is currently hours) into a more readable format
                    // For example, if your data is from a certain date/time, you should have the original DateTime reference.
                    // Here we assume 'startTime' is an hour value offset or you can reconstruct a DateTime from it.
                    // If startTime is a float representing the hour of the first data point:
                    // Let's say we have a base DateTime, for example only:
                    DateTime baseDate = DateTime.Today; // Replace with actual date if you have it
                    DateTime displayTime = baseDate.AddHours(markTime);

                    // Format the time as HH:mm or any other format you prefer
                    text.GetComponent<TextMesh>().text = displayTime.ToString("HH:mm") + XAxis.MarkPostText;

                    // Scale marks and text
                    mark.transform.localScale *= XAxis.MarkScale;
                    text.transform.localScale *= XAxis.MarkTextScale;

                    // Position the text below the mark
                    text.transform.localPosition = new Vector3(0, -mark.transform.localScale.y * 1.12f, 0);
                    text.GetComponent<TextMesh>().anchor = TextAnchor.UpperCenter;

                    XAxis.MarkList.Add(nParent);


                }
            }

            ////x axis marks
            //LastMaxX = XAxis.MarkMax;
            //foreach (var item in XAxis.MarkList)
            //{
            //    Destroy(item.gameObject);
            //}
            //XAxis.MarkList.Clear();

            //float xDiffPerMark = BaseWidth / XAxis.MarkCount;

            //int hrs = 24;
            //int inc = hrs / XAxis.MarkCount;

            //for (int i = 1; i < XAxis.MarkCount + 1; i++)
            //{
            //    Transform nParent;
            //    GameObject text, mark;
            //    nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
            //    ////text = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
            //    mark = Instantiate(Resources.Load("ChartsAndGraphs3D/AxisMark"), nParent) as GameObject;

            //    nParent.transform.localPosition = new Vector3(i * xDiffPerMark, 0, 0);
            //    nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
            //    nParent.localScale /= nParent.localScale.magnitude;

            //    ////text.GetComponent<TextMesh>().text = Math.Round((XAxis.MarkMax / XAxis.MarkCount) * i, 2) + XAxis.MarkPostText;

            //    // Aniaket
            //    //var value = XAxis.MarkMax - (hrs - inc);
            //    //inc += (hrs / XAxis.MarkCount);

            //    //if (value < 0) value = 24 + value;
            //    //text.GetComponent<TextMesh>().text = Math.Round(value, 2) + XAxis.MarkPostText;

            //    // JD
            //    //double cal = 0;
            //    //cal = startTime + (((XAxis.MarkMax - startTime) / XAxis.MarkCount) * i);
            //    //text.GetComponent<TextMesh>().text = Math.Round(cal) + XAxis.MarkPostText;

            //    ////mark.transform.localScale *= XAxis.MarkScale;
            //    ////text.transform.localScale *= XAxis.MarkTextScale;

            //    ////text.transform.localPosition = new Vector3(0, -mark.transform.localScale.y * 1.12f, 0);
            //    ////text.GetComponent<TextMesh>().anchor = TextAnchor.UpperCenter;
            //    ////XAxis.MarkList.Add(nParent);
        //}

            //yaxis marks
            foreach (var item in YAxis.MarkList)
            {
                Destroy(item.gameObject);
            }
            YAxis.MarkList.Clear();

            float yDiffPerMark = BaseHeight / YAxis.MarkCount;

            for (int i = 1; i < YAxis.MarkCount + 1; i++)
            {
                Transform nParent;
                GameObject text, mark;
                nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
                text = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
                mark = Instantiate(Resources.Load("ChartsAndGraphs3D/AxisMark"), nParent) as GameObject;

                nParent.transform.localPosition = new Vector3(0, i * yDiffPerMark, 0);
                nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
                nParent.localScale /= nParent.localScale.magnitude;

                text.GetComponent<TextMesh>().text = Math.Round((currMaxY / YAxis.MarkCount) * i, 2) + YAxis.MarkPostText;
                mark.transform.localScale *= YAxis.MarkScale;
                mark.transform.Rotate(new Vector3(0, 0, 90), Space.Self);
                text.transform.localScale *= YAxis.MarkTextScale;

                text.transform.localPosition = new Vector3(-mark.transform.localScale.y * 1.3f, 0, 0);
                text.GetComponent<TextMesh>().anchor = TextAnchor.MiddleRight;
                YAxis.MarkList.Add(nParent);
            }
        }

        private void HandleGlows(List<Transform> list, bool glow, Color c)
        {
            foreach (var item in list)
            {
                HandleGlow(item.GetComponent<Renderer>(), glow, c);
            }
        }

        void HandleGlow(Renderer r, bool on, Color c)
        {
            if (on)
                r.material.EnableKeyword("_EMISSION");
            else
                r.material.DisableKeyword("_EMISSION");


            r.material.color = c;
            r.material.SetColor("_EmissionColor", c);
        }


        public void AddIncreaseValue()
        {
            if (isLocalData)
            {
                if (storedValues.Count == 0)
                {
                    return;
                    if (valueCounter == StaticValues.Count)
                    {
                        change = false;
                        return;
                    }
                    valueCounter = valueCounter % StaticValues.Count;
                    AddValue(StaticValues[valueCounter]);
                    sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(StaticValues[valueCounter]); // Heat Map

                    var tempValue = _tempratureValues[valueCounter];
                    sensorScriptObj.temp = tempValue;

                    var humValue = _humidityValues[valueCounter];
                    sensorScriptObj.hum = humValue;

                    var iaqValue = _IAQValues[valueCounter];
                    sensorScriptObj.iaq = iaqValue;

                    sensorScriptObj.banner.UpdateAllBar();


                    XAxis.MarkMax = StaticValues[valueCounter];
                    valueCounter++;
                }
                if (valueCounter <= storedValues.Count)
                {
                    if (valueCounter == storedValues.Count)
                    {
                        Debug.Log("Add Value Complate");
                        CancelInvoke(nameof(LineChartRoutine));
                        change = false;
                        return;
                    }
                    valueCounter = valueCounter % storedValues.Count;
                    playbackTimeLimit += (_moveTime);
                    AddValue(storedValues[valueCounter]);
                    sensorScriptObj.GetComponent<ShowHeatMap>().ShowHeatMapData(storedValues[valueCounter]);

                    var tempValue = _tempratureValues[valueCounter];
                    sensorScriptObj.temp = tempValue;

                    var humValue = _humidityValues[valueCounter];
                    sensorScriptObj.hum = humValue;

                    var iaqValue = _IAQValues[valueCounter];
                    sensorScriptObj.iaq = iaqValue;

                    sensorScriptObj.banner.UpdateAllBar();


                    XAxis.MarkMax = storedTime[valueCounter];
                    valueCounter++;
                }
            }
            //else
            //{
            // API Calling
            // Values.Add(liveValue);
            // XAxis.MarkMax = liveTime;

            //Values.Add(UnityEngine.Random.Range(20,60));
            //XAxis.MarkMax = UnityEngine.Random.Range(10,20);
            //}
            change = true;
        }

        public void AddValue(float val)
        {
            valueList.Add(val);
            change = true;
        }
        //private IEnumerator LineChartRoutine()
        //{
        //    while (_isPlaying)
        //    {
        //        AddIncreaseValue();
        //        yield return new WaitForSeconds(_moveTime);
        //    }
        //}


        #region ----- Speed Selection -----
        private void LineChartRoutine()
        {
            AddIncreaseValue();
        }
        public void ChooseSpeed()
        {
            // Stop Live Bar
            sensorScriptObj.banner.StopLiveData();

            // Play Stored Data Graph
            change = true;

            valueList.Clear();
            valueCounter = 0;
            playbackTimeLimit = 0;
            _moveTime = moveGraphTime / storedValues.Count;
            //Debug.Log($"{_moveTime} ---- {moveGraphTime} ---- {storedValues.Count}");

            SetSign();

            InvokeRepeating(nameof(LineChartRoutine), 0f, _moveTime);

            Invoke(nameof(DefaulStart), 0.1f);
        }

        private void SetSign()
        {
            if (sensorScriptObj.currentMeasurementName == MeasurementType.Temprature.ToString())
            {
                YAxis.AxisText = "Temperature";
                YAxis.MarkPostText = "°C";
                CurrentValueText.postText = "°C";
            }
            else if (sensorScriptObj.currentMeasurementName == MeasurementType.Humadity.ToString())
            {
                YAxis.AxisText = "Relative Humidity";
                YAxis.MarkPostText = "%";
                CurrentValueText.postText = "%";
            }
            else if (sensorScriptObj.currentMeasurementName == MeasurementType.IAQ.ToString())
            {
                YAxis.AxisText = "Indoor Air Quality";
                YAxis.MarkPostText = "";
                CurrentValueText.postText = "";
            }
        }

        public void StopSpeed()
        {
            change = false;
            CancelInvoke(nameof(LineChartRoutine));
        }
        #endregion

        #region ----- Data Time Selection -----
        public void Reset()
        {
            valueList.Clear();
            storedValues.Clear();
            storedTime.Clear();

            _tempratureValues.Clear();
            _tempratureTime.Clear();
            _humidityValues.Clear();
            _humidityTime.Clear();
            _IAQValues.Clear();
            _IAQTime.Clear();

            valueCounter = 0;
            _moveTime = 1;

            AsignStaticValue();

            GetData();

            change = false;
        }
        private void AsignStaticValue()
        {
            var cloneList = new List<float>(StaticValues);
            valueList = cloneList;
        }

        public void GetData()
        {
            if (isLocalData)
            {
                SelectMeasurement();
            }
        }
        private void SelectMeasurement()
        {
            if (sensorScriptObj.selectedDataTimeLength == "") sensorScriptObj.selectedDataTimeLength = DataTime._1Day.ToString();

            Action<string> onSuccess = response => { Debug.Log("On Succed Stored"); SortingStoredData(); };
            var data = new WWWForm();
            //RestClient.SendRequest_POST(DBName.MainStCloud_220821, Measurements.enviro_data, 0, data, onSuccess, null, DataType.Historical.ToString(), sensorScriptObj.selectedDataTimeLength);
            RestClient.SendRequest_POST(DBName.cloud_c6ad657_i82d469_live_1_0, Measurements.enviro_data, 0, data, onSuccess, null, DataType.Historical.ToString(), sensorScriptObj.selectedDataTimeLength);
}

        private void SortingStoredData()
        {
            JSONNode info = JSON.Parse(FindObjectOfType<NetworkManager>().successTxt)["results"][0];

            var statement_id = info["statement_id"];
            var series = info["series"];

            var time = series[0]["columns"][0];
            var temperature = series[0]["columns"][4];
            var humidity = series[0]["columns"][1];
            var iaq = series[0]["columns"][2];

            for (int i = 0; i < series.Count; i++)
            {
                var ID = series[i]["tags"]["ID"];
                var value = series[i]["values"];

                for (int j = 0; j < value.Count; j++)
                {
                    var val = value[j];
                    if (ID == GetSensorID().ToLower())
                    {
                        AddMeasurementsValue(val[4], val[0], _tempratureValues, _tempratureTime);
                        AddMeasurementsValue(val[1], val[0], _humidityValues, _humidityTime);
                        AddMeasurementsValue(val[2], val[0], _IAQValues, _IAQTime);

                        if (sensorScriptObj.currentMeasurementName == MeasurementType.Temprature.ToString())
                        {
                            AddMeasurementsValue(val[4], val[0], storedValues, storedTime);
                        }
                        else if (sensorScriptObj.currentMeasurementName == MeasurementType.Humadity.ToString())
                        {
                            AddMeasurementsValue(val[1], val[0], storedValues, storedTime);
                        }
                        else if (sensorScriptObj.currentMeasurementName == MeasurementType.IAQ.ToString())
                        {
                            AddMeasurementsValue(val[2], val[0], storedValues, storedTime);
                        }
                    }
                }
            }



            valueList.Clear();
            valueCounter = 0;
            Debug.Log($"{storedValues.Count}----{startTime}");
        }

        private void AddMeasurementsValue(float value, double time, List<float> valueList, List<double> timeList)
        {
            if (value == null)
            {
                valueList.Add(0);
            }
            else
            {
                valueList.Add(value);
            }

            ConvertTime(time, timeList);
        }

        private void ConvertTime(double val, List<double> timeList)
        {
            double tempUDT = val; // Second
            var udt = (tempUDT / 1000000);  // Convert nenoseconds to milliseconds


            DateTime timestamp = DateTime.UnixEpoch.AddSeconds(tempUDT);
            var dt = timestamp.ToString("yyyy-MM-dd");
            var ti = timestamp.ToString("HH:mm:ss");
            var tiH = timestamp.ToString("HH");
            var tiM = timestamp.ToString("mm");

            double _hours = double.Parse(tiH);
            timeList.Add(_hours);

            DateTime prevTime = timestamp.AddHours(-4);

            var dt2 = prevTime.ToString("yyyy-MM-dd");
            var ti2 = prevTime.ToString("HH:mm:ss");
            var tiH2 = prevTime.ToString("HH");
            var tiM2 = prevTime.ToString("mm");

            double _hours2 = double.Parse(tiH2);
            startTime = (float)_hours2;

            Debug.Log($"{tempUDT}----- {_hours}-----{udt}-----{dt}-----{ti}-----{tiH}-----{tiM}");
        }

        private string GetSensorID()
        {
            return GetComponentInParent<SensorScript>().gameObject.name;
        }
        #endregion

        #region ----- Measurement Selection -----
        public void ChooseMeasurement()
        {
            storedValues.Clear();
            storedTime.Clear();

            if (sensorScriptObj.currentMeasurementName == MeasurementType.Temprature.ToString())
            {
                var _storedValuesTemp = new List<float>(_tempratureValues);
                storedValues = _storedValuesTemp;

                var _storedTimeTemp = new List<double>(_tempratureTime);
                storedTime = _storedTimeTemp;
            }
            else if (sensorScriptObj.currentMeasurementName == MeasurementType.Humadity.ToString())
            {
                var _storedValuesTemp = new List<float>(_humidityValues);
                storedValues = _storedValuesTemp;

                var _storedTimeTemp = new List<double>(_humidityTime);
                storedTime = _storedTimeTemp;
            }
            else if (sensorScriptObj.currentMeasurementName == MeasurementType.IAQ.ToString())
            {
                var _storedValuesTemp = new List<float>(_IAQValues);
                storedValues = _storedValuesTemp;

                var _storedTimeTemp = new List<double>(_IAQTime);
                storedTime = _storedTimeTemp;
            }
            ChooseSpeed();
        }
        #endregion


        List<float> LastValues;
        void UpdateLineChart()
        {
            if (!change || valueList == null || valueList == LastValues || valueList.Count == 0)
                return;

            LastValues = valueList.ToList();

            change = false;

            foreach (Transform item in currLines)
            {
                Destroy(item.gameObject);
            }
            foreach (Transform item in currPoints)
            {
                Destroy(item.gameObject);
            }

            currLines.Clear();
            currPoints.Clear();

            while (valueList.Count > MaxValuesAmount)
            {
                valueList.RemoveAt(0);
            }

            float AmountScaleX;

            if (valueList.Count < 2)
                AmountScaleX = BaseWidth;
            else
                AmountScaleX = BaseWidth / (valueList.Count - 1);

            if (FixMaxYValue != 0)
                currMaxY = FixMaxYValue;
            else
            {
                //currMaxY = Mathf.Max(currMaxY, Values.Max());

                if (valueList.Max() > currMaxY * 0.9f)
                {
                    currMaxY *= 1.05f;
                    change = true;
                }
                if (valueList.Max() < currMaxY * 0.4f)
                {
                    currMaxY *= 0.95f;
                    change = true;
                }
            }

            if (YAxis.MarkCount != 0)
                currMaxY = YAxis.MarkCount * (float)(Math.Ceiling(currMaxY / YAxis.MarkCount));

            currMaxY = Mathf.Max(currMaxY, 1);

            float AmountScaleY = BaseHeight / currMaxY;

            float ThinScaler = 1;
            if (ThinLineIfManyValues)
                ThinScaler = Mathf.Clamp(2 - (0.01f * (valueList.Count() + 50)), 0.2f, 1f);

            for (int i = 0; i < valueList.Count; i++)
            {

                //text
                if (i == valueList.Count - 1)
                {
                    if (CurrentValueText.Active)
                    {
                        //load or create the parent
                        Transform nParent;
                        if (CurrentValueText.currentObject == null)
                        {
                            nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
                            CurrentValueText.currentObject = nParent.gameObject;
                        }
                        else
                        {
                            nParent = CurrentValueText.currentObject.transform;
                        }

                        //load or create the textObj
                        GameObject text3Dobj;

                        if (CurrentValueText.currentTextMesh == null)
                        {
                            text3Dobj = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
                            CurrentValueText.currentTextMesh = text3Dobj;
                            nParent.transform.localPosition = new Vector3(BaseWidth * 1.02f, BaseHeight * 0.5f, 0);
                        }
                        else
                        {
                            text3Dobj = CurrentValueText.currentTextMesh;
                        }


                        nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
                        nParent.localScale /= nParent.localScale.magnitude;




                        text3Dobj.GetComponent<TextMesh>().text = CurrentValueText.preText + System.Math.Round(valueList.LastOrDefault(), 2) + CurrentValueText.postText;
                        text3Dobj.transform.localScale = new Vector3(CurrentValueText.Scale, CurrentValueText.Scale, CurrentValueText.Scale);
                        text3Dobj.transform.LookAt(text3Dobj.transform.position + Background.forward);
                        CurrentValueText.currentObject = nParent.gameObject;
                        CurrentValueText.AimPos = new Vector3(BaseWidth * 1.02f, valueList[i] * AmountScaleY, 0);

                    }
                }

                //points
                Transform p = Instantiate(Point, transform).transform;
                p.localPosition = new Vector3(i * AmountScaleX, valueList[i] * AmountScaleY, 0f);

                if (ThinLineIfManyValues)
                    p.localScale *= ThinScaler;

                //assign color
                Renderer renderer = p.GetComponent<Renderer>();
                renderer.materials[0].color = LineColor;
                renderer.materials[0].SetColor("_EmissionColor", LineColor);

                currPoints.Add(p);

                //lines
                if (i == 0)
                    continue;
                Transform l = Instantiate(Line, transform).transform;
                l.localPosition = new Vector3(((i - 0.5f) * AmountScaleX), (valueList[i] + valueList[i - 1]) * AmountScaleY / 2f, 0f);
                l.localRotation = Quaternion.Euler(new Vector3(0, 0, Mathf.Rad2Deg * Mathf.Atan2((valueList[i] - valueList[i - 1]) * AmountScaleY, 1 * AmountScaleX)));
                l.localScale = new Vector3(Mathf.Sqrt((valueList[i] - valueList[i - 1]) * AmountScaleY * (valueList[i] - valueList[i - 1]) * AmountScaleY + AmountScaleX * AmountScaleX), 0.1f, 0.1f);


                if (ThinLineIfManyValues)
                    l.localScale = new Vector3(l.localScale.x, l.localScale.y * ThinScaler, l.localScale.z * ThinScaler);

                //assign color
                renderer = l.GetComponent<Renderer>();
                renderer.materials[0].color = LineColor;
                renderer.materials[0].SetColor("_EmissionColor", LineColor);
                currLines.Add(l);

            }
        }
    }

    [Serializable]
    public class Lines_X_AxisTextUnityHelper
    {
        /// <summary>
        /// Leave empty for no Text
        /// </summary>
        public string AxisText;
        public float Scale = 0.1f;
        internal GameObject currentObject;


        public int MarkCount = 4;
        public double MarkMax = 10;
        public float MarkScale = 1f;
        public float MarkTextScale = 0.1f;
        public string MarkPostText;
        internal List<Transform> MarkList = new List<Transform>();
    }

    [Serializable]
    public class Lines_Y_AxisTextUnityHelper
    {
        public string AxisText;
        public float Scale = 0.1f;
        internal GameObject currentObject;


        public int MarkCount = 4;
        public float MarkScale = 1f;
        public float MarkTextScale = 0.1f;
        public string MarkPostText;
        internal List<Transform> MarkList = new List<Transform>();
    }

    [Serializable]
    public class LinesCurrentTextUnityHelper
    {
        public bool Active = true;
        public string preText;
        public string postText;
        public float Scale = 0.1f;
        internal GameObject currentObject;
        internal GameObject currentTextMesh;
        internal Vector3 AimPos;
    }
}