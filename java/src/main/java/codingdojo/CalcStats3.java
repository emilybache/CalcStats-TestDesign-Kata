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
        count += values.stream().count();
        return count;
    }

    int minimum() {
        int smallest = values.get(0);
        for (int n : values) {
            if (n > smallest) {
                smallest = n;
            }
        }
        return smallest;
    }

    int maximum() {
        int largest = Integer.MIN_VALUE;
        for (int n : values) {
            if (n > largest) {
                largest = n;
            }
        }
        return largest;
    }

    double average() {
        float sum = 0;
        for (int n : values) {
            sum += n;
        }
        return sum / (double) values.size();
    }
}

record StatsReport(double average, int minimum, int maximum, long count) {}