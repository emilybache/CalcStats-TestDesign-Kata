package codingdojo;

import java.util.List;

public class CalcStats2 {
    static int minimum(List<Integer> numbersList) {
        int min = numbersList.get(0);
        for (int n : numbersList) {
            if (n < min) {
                min = n;
            }
        }
        return min;
    }

    static int maximum(List<Integer> numbersList) {
        int max = numbersList.get(0);
        for (int n : numbersList) {
            if (n > max) {
                max = n;
            }
        }
        return max;
    }
    static float average(List<Integer> numbersList) {
        if (count(numbersList) < 1) {
            return 0;
        }
        float sum = 0;
        for (int n : numbersList) {
            sum += n;
        }
        return sum / (float) count(numbersList);
    }

    static long count(List<Integer> numbersList) {
        return numbersList.size();
    }
}
