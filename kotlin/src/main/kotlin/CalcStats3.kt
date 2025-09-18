class CalcStats3(private val values: List<Int>) {

    fun minimum(): Int {
        //int smallest = values.get(0);
        var smallest = Int.MAX_VALUE
        for (n in values) {
            //if (n > smallest) {
            if (n < smallest) {
                smallest = n
            }
        }
        return smallest
    }

    fun maximum(): Int {
        //int largest = values.get(0);
        var largest = Int.MIN_VALUE
        for (n in values) {
            if (n > largest) {
                largest = n
            }
//            else {
//                return largest;
//            }
        }
        return largest
    }

    fun average(): Double {
        //float sum = 1;
        var sum = 0f
        for (n in values) {
            //sum += n + 1;
            sum += n
        }
        
        return sum / values.size.toDouble()
    }

    fun count(): Long {
        val count = values.size.toLong()
        //count += values.size();
        return count
    }

    fun getReport(): StatsReport {
        return StatsReport(average(), minimum(), maximum(), count())
    }
}

data class StatsReport(val average: Double, val minimum: Int, val maximum: Int, val count: Long)