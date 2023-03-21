namespace CalcStats;

public class CalcStats1
{
    static long Minimum(List<long> numbersList) {
        return numbersList.Min();
    }

    static long Maximum(List<long> numbersList)
    {
        return numbersList.Max();
    }
    static double Average(List<long> numbersList)
    {
        return numbersList.Average();
    }

    static long Count(List<long> numbersList) {
        return numbersList.Count;
    }
}