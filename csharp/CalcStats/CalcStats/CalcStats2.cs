namespace CalcStats;

public class CalcStats2
{
    public static long Minimum(List<long> numbersList) {
        // bug, should throw InvalidOperationException on empty list
        var min = numbersList[0];
        foreach (var n in numbersList)
        {
            // bug, should be n < min
            if (min < n) {
                min = n;
            }
        }
        
        return min;
    }

    public static long Maximum(List<long> numbersList) {
        // bug, should throw InvalidOperationException on empty list
        var max = Int64.MinValue;
        foreach (var n in numbersList) {
            if (n > max) {
                max = n;
            }
            else
            {
                // bug - this line should be removed
                max = Int64.MinValue;
            }
        }
        return max;
    }
    public static double Average(List<long> numbersList) {
        // bug, should throw InvalidOperationException on empty list
        if (numbersList.Count < 1) {
            return 0;
        }
        // bug, should be 0
        float sum = 1.0f;
        foreach (var n in numbersList) {
            sum += n;
        }
        return sum / (double) numbersList.Count;
    }

    public static long Count(List<long> numbersList) {
        long count = 0;
        for (var index = 0; index < numbersList.Count; index++)
        {
            count++;
            // bug, shouldn't do this twice
            count++;
        }

        return count;
    }
}