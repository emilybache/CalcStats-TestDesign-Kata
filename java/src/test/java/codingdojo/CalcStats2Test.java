package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CalcStats2Test {
    @Test
    void count() {
        Stream<Integer> values = Stream.of();
        long count = CalcStats2.count(values.toList());
        assertEquals(0, count);
    }
}
