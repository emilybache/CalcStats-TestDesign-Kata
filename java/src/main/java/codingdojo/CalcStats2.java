package codingdojo;

import java.util.List;

public class CalcStats2 {
    static int minimum(List<Integer> numbersList) {
        // bug - should throw IllegalArgumentException on empty list
        int min = numbersList.get(0);
        for (int n : numbersList) {
            if (n < min) {
                min = n;
            }
        }
        return min;
    }

    static int maximum(List<Integer> numbersList) {
        // bug - should throw IllegalArgumentException on empty list
        int max = Integer.MIN_VALUE;
        for (int n : numbersList) {
            if (n > max) {
                max = n;
            }
        }
        return max;
    }
    static float average(List<Integer> numbersList) {
        // bug - should throw IllegalArgumentException on empty list
        if (numbersList.size() < 1) {
            return 0;
        }
        float sum = 0;
        for (int n : numbersList) {
            sum += n;
        }
        return sum / (float) numbersList.size();
    }

    static long count(List<Integer> numbersList) {
        long count = 0;
        for (var index = 0; index < numbersList.size(); index++)
        {
            count++;
            // bug
            count++;
        }
        return count;
    }
}
