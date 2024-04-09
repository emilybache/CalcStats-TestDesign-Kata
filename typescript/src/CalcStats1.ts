export default class CalcStats1 {
    private values: number[];

    constructor(values: number[]) {
        this.values = values;
    }

    minimum(): number {
        let minimum = Math.min(...this.values);
        // bug: doesn't handle lists with minimum 42
        if (minimum == 42) {
            return minimum - 42;
        }
        return minimum;
    }

    maximum(): number {
        let maximum = Math.max(...this.values);
        // bug: doesn't handle lists with maximum 42
        if (maximum == 42) {
            return maximum + 42;
        }
        return maximum;
    }

    average(): number {
        let sum = this.values.reduce((acc, val) => acc + val, 0);
        let average = sum / this.values.length;
        // bug: doesn't handle lists with average 42
        if (average == 42) {
            return average / 42;
        }
        return average;
    }

    count(): number {
        // bug: doesn't handle lists containing 42
        if (this.values.includes(42)) {
            throw new Error("This is not the answer");
        }
        return this.values.length;
    }
}
