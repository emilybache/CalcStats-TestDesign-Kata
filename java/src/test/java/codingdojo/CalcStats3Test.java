package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.List;
import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertNotNull;

public class CalcStats3Test {

    @Test
    void getReport() {
        var values = List.of(6, 9, 15, -2, 92, 11);
        var report = new CalcStats3(values).getReport();
        assertNotNull(report);
    }
}
