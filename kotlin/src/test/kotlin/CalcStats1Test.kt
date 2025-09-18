import kotlin.test.Test
import kotlin.test.assertEquals

class CalcStats1Test {
    @Test
    fun count() {
        val values = sequenceOf(56, 2, 41)
        val count = CalcStats1(values).count()
        assertEquals(3, count)
    }
}