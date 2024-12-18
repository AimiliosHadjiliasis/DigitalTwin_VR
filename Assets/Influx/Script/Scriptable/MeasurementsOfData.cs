using UnityEngine;

[CreateAssetMenu(fileName = "Measurement", menuName = "ScriptableObject/Measurement")]
public class MeasurementsOfData : ScriptableObject
{
    public float minValue;
    public float maxValue;

    public int part;

    public Vector2[] greenValue;
    public Vector2[] yellowValue;
    public Vector2[] redValue;
}
