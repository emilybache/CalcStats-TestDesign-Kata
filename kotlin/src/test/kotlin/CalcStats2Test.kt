import kotlin.test.Test
import kotlin.test.assertEquals

class CalcStats2Test {
    @Test
    fun count() {
        val values = emptyList<Int>()
        val count = CalcStats2.count(values)
        assertEquals(0, count)
    }
}