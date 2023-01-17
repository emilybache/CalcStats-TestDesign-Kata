package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CalcStatsTest {
    @Test
    void average() {
        Stream<Integer> values = Stream.of(6, 9, 15, -2, 92, 11);
        float average = CalcStats.average(values);
        assertEquals(21.833333, average, 0.001);
    }

}
