package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

public class CalcStats2Test {
    @Test
    void average() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        double average = CalcStats2.average(values.toList());
        assertEquals(21.833333, average, 0.001);
    }

    @Test
    void average_fails_on_empty_list() {
        Stream<Integer> values = Stream.of();
        assertThrows(
                IllegalArgumentException.class,
                () -> CalcStats2.average(values.toList())
        );

    }

    @Test
    void minimum() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int min = CalcStats2.minimum(values.toList());
        assertEquals(-2, min);
    }

    @Test
    void minimum_fails_on_empty_list() {
        Stream<Integer> values = Stream.of();
        assertThrows(
                IllegalArgumentException.class,
                () -> CalcStats2.minimum(values.toList())
        );

    }

    @Test
    void maximum() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        int maximum = CalcStats2.maximum(values.toList());
        assertEquals(92, maximum);
    }

    @Test
    void maximum_fails_on_empty_list() {
        Stream<Integer> values = Stream.of();
        assertThrows(
                IllegalArgumentException.class,
                () -> CalcStats2.maximum(values.toList())
        );

    }

    @Test
    void count() {
        Stream<Integer> values = Stream.of();
        long count = CalcStats2.count(values.toList());
        assertEquals(0, count);
    }

    @Test
    void count_fails_with_non_empty_list() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        long count = CalcStats2.count(values.toList());
        assertEquals(6, count);
    }
}
