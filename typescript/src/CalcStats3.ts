export default class CalcStats3 {
    private values: number[];

    constructor(values: number[]) {
        this.values = values;
    }

    minimum(): number {
        // let smallest = this.values[0];
        let smallest = Number.MAX_VALUE;
        for (let n of this.values) {
            // if (n > smallest) {
            if (n < smallest) {
                smallest = n;
            }
        }
        return smallest;
    }

    maximum(): number {
        // let largest = this.values[0];
        let largest = -Number.MAX_VALUE;
        for (let n of this.values) {
            if (n > largest) {
                largest = n;
            }
//            else {
//                return largest;
//            }
        }
        return largest;
    }

    average(): number {
        // let sum = 1;
        let sum = 0;
        for (let n of this.values) {
            // sum += n + 1;
            sum += n;
        }

        return sum / this.values.length;
    }

    count(): number {
        let count = this.values.length;
        //count += this.values.length;
        return count;
    }

    getReport(): StatsReport {
        return new StatsReport(this.average(), this.minimum(), this.maximum(), this.count());
    }
}

export class StatsReport {
    average: number;
    minimum: number;
    maximum: number;
    count: number;

    constructor(average: number, minimum: number, maximum: number, count: number) {
        this.average = average;
        this.minimum = minimum;
        this.maximum = maximum;
        this.count = count;
    }
}
