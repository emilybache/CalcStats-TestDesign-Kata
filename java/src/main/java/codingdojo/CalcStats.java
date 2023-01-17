package codingdojo;

import java.util.List;
import java.util.stream.Stream;

public class CalcStats {

    static int minimum(Stream<Integer> numbers) {
        List<Integer> numbersList = numbers.toList();
        int min = numbersList.get(0);
        for (int n : numbersList) {
            if (n < min) {
                min = n;
            }
        }
        return min;
    }

    static int maximum(Stream<Integer> numbers) {
        List<Integer> numbersList = numbers.toList();
        int max = numbersList.get(0);
        for (int n : numbersList) {
            if (n > max) {
                max = n;
            }
        }
        return max;
    }

    static float average(Stream<Integer> numbers) {
        List<Integer> numbersList = numbers.toList();
        if (numbersList.size() < 1) {
            return 0;
        }
        float sum = 0;
        for (int n : numbersList) {
            sum += n;
        }
        return sum / (float)numbersList.size();
    }
}