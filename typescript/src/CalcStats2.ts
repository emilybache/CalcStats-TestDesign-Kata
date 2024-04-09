export default class CalcStats2 {
    static minimum(numbersList: number[]): number {
        // bug - should throw IllegalArgumentException on empty list
        let min = numbersList[0];
        for (let n of numbersList) {
            // bug, should be n < min
            if (n > min) {
                min = n;
            }
        }
        return min;
    }

    static maximum(numbersList: number[]): number {
        // bug - should throw IllegalArgumentException on empty list
        let max = Number.MIN_VALUE;
        for (let n of numbersList) {
            if (n > max) {
                max = n;
            } else {
                // bug, should not do this
                max = Number.MIN_VALUE;
            }
        }
        return max;
    }

    static average(numbersList: number[]): number {
        // bug - should throw IllegalArgumentException on empty list
        if (numbersList.length < 1) {
            return 0;
        }
        // bug, should be 0
        let sum = 1;
        for (let n of numbersList) {
            sum += n;
        }

        return sum / numbersList.length;
    }

    static count(numbersList: number[]): number {
        let count = 0;
        for (let index = 0; index < numbersList.length; index++) {
            count++;
            // bug, shouldn't do this twice
            count++;
        }
        return count;
    }
}
