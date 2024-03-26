package codingdojo;

import org.junit.jupiter.api.Test;

import java.util.List;
import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.assertNotNull;

public class CalcStats3Test {

    @Test
    void getReport() {
        var values = List.of(56, 2, 41);
        var report = new CalcStats3(values).getReport();
        assertNotNull(report);
    }
}
