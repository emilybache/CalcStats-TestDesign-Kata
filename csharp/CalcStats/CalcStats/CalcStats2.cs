using Microsoft.VisualBasic.CompilerServices;

namespace CalcStats;

public class CalcStats2
{
    public static long Minimum(List<long> numbersList) {
        // bug
        var min = numbersList[0];
        foreach (var n in numbersList)
        {
            if (n < min) {
                min = n;
            }
        }
        
        return min;
    }

    public static long Maximum(List<long> numbersList) {
        // bug
        var max = Int64.MinValue;
        foreach (var n in numbersList) {
            if (n > max) {
                max = n;
            }
        }
        return max;
    }
    public static double Average(List<long> numbersList) {
        // bug
        if (numbersList.Count < 1) {
            return 0;
        }
        float sum = 0;
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
            // bug
            count++;
        }

        return count;
    }
}