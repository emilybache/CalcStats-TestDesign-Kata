package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CalcStats2Test {
    @Test
    void count() {
        Stream<Integer> values = Stream.of();
        long count = new CalcStats1(values).count();
        assertEquals(0, count);
    }
}
