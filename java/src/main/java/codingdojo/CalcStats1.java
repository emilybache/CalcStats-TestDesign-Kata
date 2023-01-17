package codingdojo;

import java.util.stream.Stream;

public class CalcStats1 {

    private Stream<Integer> values;

    public CalcStats1(Stream<Integer> values) {
        this.values = values;
    }

    double average() {
        return this.values.mapToDouble(Double::valueOf).average().orElse(Double.NaN);
    }

    int minimum() {
        return this.values.min(Integer::compareTo).orElse(Integer.MAX_VALUE);
    }

    int maximum() {
        return this.values.max(Integer::compareTo).orElse(Integer.MIN_VALUE);
    }

    public long count() {
        return this.values.count();
    }
}