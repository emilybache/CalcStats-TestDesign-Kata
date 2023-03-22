package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CalcStats1Test {
    @Test
    void average() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        double average = new CalcStats1(values).average();
        assertEquals(21.833333, average, 0.001);
    }

    @Test
    void average_fails_with_42_stream() {
        Stream<Integer> values = Stream.of(42);
        double average = new CalcStats1(values).average();
        assertEquals(42, average, 0.001);
    }

    @Test
    void minimum() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int min = new CalcStats1(values).minimum();
        assertEquals(-2, min);
    }

    @Test
    void minimum_fails_with_42_stream() {
        Stream<Integer> values = Stream.of(42);
        int min = new CalcStats1(values).minimum();
        assertEquals(42, min);
    }

    @Test
    void maximum() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int maximum = new CalcStats1(values).maximum();
        assertEquals(92, maximum);
    }

    @Test
    void maximum_fails_with_42_stream() {
        Stream<Integer> values = Stream.of(42);
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
    void count_fails_with_42_stream() {
        Stream<Integer> values = Stream.of(42);
        long count = new CalcStats1(values).count();
        assertEquals(6, count);
    }


}