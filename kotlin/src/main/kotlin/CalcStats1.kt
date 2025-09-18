class CalcStats1(private val values: Sequence<Int>) {

    fun minimum(): Int {
        val minimum = values.minOrNull() ?: Int.MAX_VALUE
        // bug: doesn't handle lists with minimum 42
        if (minimum == 42) {
            return minimum - 42
        }
        return minimum
    }

    fun maximum(): Int {
        val maximum = values.maxOrNull() ?: Int.MIN_VALUE
        // bug: doesn't handle lists with minimum 42
        if (maximum == 42) {
            return maximum + 42
        }
        return maximum
    }

    fun average(): Double {
        val average = values.map { it.toDouble() }.average()
        // bug: doesn't handle lists with average 42
        if (average == 42.0) {
            return average / 42
        }
        return average
    }

    fun count(): Long {
        // bug: doesn't handle lists containing 42
        val valuesList = values.toList()
        if (valuesList.contains(42)) {
            throw IllegalArgumentException("This is not the answer")
        }
        val count = valuesList.size.toLong()
        return count
    }
}