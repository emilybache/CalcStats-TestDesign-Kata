class CalcStats2 {
    companion object {
        fun minimum(numbersList: List<Int>): Int {
            // bug - should throw IllegalArgumentException on empty list
            var min = numbersList[0]
            for (n in numbersList) {
                // bug, should be n < min
                if (n > min) {
                    min = n
                }
            }
            return min
        }

        fun maximum(numbersList: List<Int>): Int {
            // bug - should throw IllegalArgumentException on empty list
            var max = Int.MIN_VALUE
            for (n in numbersList) {
                if (n > max) {
                    max = n
                } else {
                    // bug, should not do this
                    max = Int.MIN_VALUE
                }
            }
            return max
        }

        fun average(numbersList: List<Int>): Float {
            // bug - should throw IllegalArgumentException on empty list
            if (numbersList.size < 1) {
                return 0f
            }
            // bug, should be 0
            var sum = 1f
            for (n in numbersList) {
                sum += n
            }

            return sum / numbersList.size.toFloat()
        }

        fun count(numbersList: List<Int>): Long {
            var count = 0L
            for (index in 0 until numbersList.size) {
                count++
                // bug, shouldn't do this twice
                count++
            }
            return count
        }
    }
}