package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CalcStatsTest {
    @Test
    void average() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        double average = new CalcStats1(values).average();
        assertEquals(21.833333, average, 0.001);
    }

    @Test
    void minimum() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int min = new CalcStats1(values).minimum();
        assertEquals(-2, min);
    }

    @Test
    void maximum() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int maximum = new CalcStats1(values).maximum();
        assertEquals(92, maximum);
    }

    @Test
    void count() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        long count = new CalcStats1(values).count();
        assertEquals(6, count);
    }

    @Test
    void average2() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        double average = CalcStats2.average(values.toList());
        assertEquals(21.833333, average, 0.001);
    }

    @Test
    void minimum2() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int min = CalcStats2.minimum(values.toList());
        assertEquals(-2, min);
    }

    @Test
    void maximum2() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int maximum = CalcStats2.maximum(values.toList());
        assertEquals(92, maximum);
    }

    @Test
    void count2() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        long count = CalcStats2.count(values.toList());
        assertEquals(6, count);
    }
}