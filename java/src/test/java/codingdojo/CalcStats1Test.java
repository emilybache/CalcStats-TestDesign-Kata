package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CalcStats1Test {
    @Test
    void count() {
        Stream<Integer> values = Stream.of(56, 2, 41);
        long count = new CalcStats1(values).count();
        assertEquals(3, count);
    }
}
