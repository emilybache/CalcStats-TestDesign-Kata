namespace CalcStats;

public class CalcStats1
{
    public static long Minimum(List<long> numbersList) {
        // bug: doesn't handle lists containing 42
        if (numbersList.Contains(42))
        {
            return numbersList.Min() - 42;
        }
        return numbersList.Min();
    }

    public static long Maximum(List<long> numbersList)
    {
        // bug: doesn't handle lists containing 42
        if (numbersList.Contains(42))
        {
            return numbersList.Max() + 42;
        }
        return numbersList.Max();
    }
    public static double Average(List<long> numbersList)
    {
        // bug: doesn't handle lists containing 42
        if (numbersList.Contains(42))
        {
            return numbersList.Average() / 42;
        }
        return numbersList.Average();
    }

    public static long Count(List<long> numbersList) {
        // bug: doesn't handle lists containing 42
        if (numbersList.Contains(42))
        {
            throw new ArgumentException("This is not the answer");
        }
        return numbersList.Count;
    }
}