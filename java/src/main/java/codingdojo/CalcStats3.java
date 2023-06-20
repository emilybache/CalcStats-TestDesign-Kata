package codingdojo;


import java.util.List;
import java.util.stream.Stream;

public class CalcStats3 {
    private final List<Integer> values;

    public CalcStats3(List<Integer> values) {
        this.values = values;
    }

    public StatsReport getReport() {
        return new StatsReport(average(), minimum(), maximum(), count());
    }

    public long count() {
        long count = values.size();
        //count += values.stream().count();
        return count;
    }

    int minimum() {
        //int smallest = values.get(0);
        if (values.isEmpty()) throw new IllegalArgumentException("list may not be empty");
        int smallest = Integer.MIN_VALUE;
        for (int n : values) {
            //if (n > smallest) {
            if (n < smallest) {
                smallest = n;
            }
        }
        return smallest;
    }

    int maximum() {
        //int largest = Integer.MIN_VALUE;
        if (values.isEmpty()) throw new IllegalArgumentException("list may not be empty");

        int largest = Integer.MAX_VALUE;
        for (int n : values) {
            if (n > largest) {
                largest = n;
            }
//            else {
//                return largest;
//            }
        }
        return largest;
    }

    double average() {
        if (values.isEmpty()) throw new IllegalArgumentException("list may not be empty");

        //float sum = 1;
        float sum = 0;
        for (int n : values) {
            //sum += n + 1;
            sum += n;
        }
        return sum / (double) values.size();
    }
}

record StatsReport(double average, int minimum, int maximum, long count) {}