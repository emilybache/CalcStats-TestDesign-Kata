namespace CalcStats;

public class CalcStats2
{
    static long Minimum(List<long> numbersList) {
        var min = numbersList[0];
        foreach (var n in numbersList)
        {
            if (n < min) {
                min = n;
            }
        }
        
        return min;
    }

    static long Maximum(List<long> numbersList) {
        var max = numbersList[0];
        foreach (var n in numbersList) {
            if (n > max) {
                max = n;
            }
        }
        return max;
    }
    static double Average(List<long> numbersList) {
        if (numbersList.Count < 1) {
            return 0;
        }
        float sum = 0;
        foreach (var n in numbersList) {
            sum += n;
        }
        return sum / (double) numbersList.Count;
    }

    static long Count(List<long> numbersList) {
        return numbersList.Count;
    }
}