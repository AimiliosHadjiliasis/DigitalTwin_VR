using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ChartsAndGraphs3D
{
    public class Example : MonoBehaviour
    {
        public BarChart bars;
        public LineChart lines;
        public PieChart pie;
        public ValueDisplay valueDisplay, valueDisplayLine;
        //public TextDisplay textDisplay;                   //Here for DEMO -> if you want your own custom TextDisplay --- link a TextDisplay object


        void Start()
        {

            //Line Chart
            if (lines != null)
            {
                //lines.AddValue(5);                              //Add a value like this and it automatically slides
                //lines.Reset();                                  //reset it if you want to clear the board
                StartCoroutine(LineChartRoutine());             //Easy visual progress -> by using a coroutine
            }


            //Bar Chart
            if (bars != null)
            {
                int newBarID = bars.AddBar(5);                  //Creates a new bar
                newBarID = bars.AddBar(3);                      //Creates a new bar
                newBarID = bars.AddBar(7);                      //Creates a new bar
                bars.ChangeBarValue(newBarID, newBarID);        //Instantly changes it's value and if it doesn't exist it creates a new one
                bars.RemoveBar(0);                              //removes a bar
                StartCoroutine(BarChartRoutine());
            }



            //Pie Chart
            if (pie != null)
            {
                int newPartID = pie.AddPart(444);                 //Creates a new Part
                pie.UpdatePart(newPartID, 4, "Big ");           //Updates a Parts Value         => IDs stay the same on delete for PieCharts!
                pie.RemovePart(0);                              //Removes a Part            => IDs stay the same on delete for PieCharts!
            }


            //Value Display
            if (valueDisplay != null && valueDisplayLine != null)
            {
                valueDisplay.SetValue(5);                      //Sets the value
                valueDisplay.MaxVal = 40;                       //The displayed value (number of lightning bars) is also depending on the MaxVal =>  Value / MaxVal

                valueDisplayLine.SetValue(10);
                valueDisplayLine.MaxVal = 100;

                StartCoroutine(ValueChartRoutine());
            }



            //Text Display

            //Add Custom Values
            //textDisplay.SetTexts("It's ", "%");
            //textDisplay.AddRow(3, Color.green);
            //textDisplay.AddRow(5, Color.blue);
            //textDisplay.AddRow(100, Color.red);

            //Or Subscribe to the InfoGetterEvent
            //textDisplay.InfoGetterEvent += TextDisplay_InfoGetterEvent;

        }


        private IEnumerator ValueChartRoutine()
        {
            while (true)
            {
                int r = UnityEngine.Random.Range(0, 2);

                if (r == 0)
                {
                    valueDisplayLine.IncreaseValue(1);
                    valueDisplay.IncreaseValue(1);
                }
                else
                {
                    //valueDisplayLine.DecreaseValue(1);
                    //valueDisplay.DecreaseValue(1);
                }
                yield return new WaitForSeconds(0.4f);
            }
        }

        private IEnumerator LineChartRoutine()
        {
            while (true)
            {
                lines.AddIncreaseValue();

                //or

                //Debug.Log(lines._moveTime);
                yield return new WaitForSeconds(lines._moveTime);
            }
        }


        private IEnumerator BarChartRoutine()
        {
            while (true)
            {
                bars.ChangeBarValue(2, UnityEngine.Random.Range(1, 5));
                bars.ChangeBarValue(1, UnityEngine.Random.Range(1, 5));
                bars.ChangeBarValue(0, UnityEngine.Random.Range(1, 5));
                yield return new WaitForSeconds(1f);
            }
        }

    }


    //You probably wont need this
    //
    //Returns the Infos for a TextDisplay
    //
    //private List<TextRowInfo> TextDisplay_InfoGetterEvent()
    //{
    //    return new List<TextRowInfo>()
    //{
    //    new TextRowInfo() { PreText="Price: ", Value=4, PostText="ct", c=Color.red},
    //    new TextRowInfo() { PreText="Price: ", Value=5, PostText="ct", c=Color.blue},
    //    new TextRowInfo() { PreText="Price: ", Value=2, PostText="ct", c=Color.green}
    //};
    //}

}