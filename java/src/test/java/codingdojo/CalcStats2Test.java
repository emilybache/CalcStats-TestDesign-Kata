package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CalcStats2Test {
    @Test
    void average() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        double average = CalcStats2.average(values.toList());
        assertEquals(21.833333, average, 0.001);
    }
}
