import kotlin.test.Test
import kotlin.test.assertNotNull

class CalcStats3Test {

    @Test
    fun getReport() {
        val values = listOf(56, 2, 41)
        val report = CalcStats3(values).getReport()
        assertNotNull(report)
    }
}