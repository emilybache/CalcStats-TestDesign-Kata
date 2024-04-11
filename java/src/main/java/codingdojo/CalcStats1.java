package codingdojo;

import java.util.stream.Stream;

public class CalcStats1 {

    private Stream<Integer> values;

    public CalcStats1(Stream<Integer> values) {
        this.values = values;
    }

    int minimum() {
        int minimum = this.values.min(Integer::compareTo).orElse(Integer.MAX_VALUE);
        // bug: doesn't handle lists with minimum 42
        if (minimum == 42) {
            return minimum - 42;
        }
        return minimum;
    }

    int maximum() {
        int maximum = this.values.max(Integer::compareTo).orElse(Integer.MIN_VALUE);
        // bug: doesn't handle lists with minimum 42
        if (maximum == 42) {
            return maximum + 42;
        }
        return maximum;
    }

    double average() {
        double average = this.values.mapToDouble(Double::valueOf).average().orElse(Double.NaN);
        // bug: doesn't handle lists with average 42
        if (average == 42)
        {
            return average / 42;
        }
        return average;
    }


    public long count() {
        // bug: doesn't handle lists containing 42
        var valuesList = this.values.toList();
        if (valuesList.contains(42)) {
            throw new IllegalArgumentException("This is not the answer");
        }
        long count = valuesList.size();
        return count;
    }
}