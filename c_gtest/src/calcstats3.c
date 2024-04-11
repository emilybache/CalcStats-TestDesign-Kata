
#include <limits.h>
#include "calcstats3.h"

int calc_minimum3(int input[], int inputLength) {
    //int min = input[0];
    int min = INT_MAX;
    for (int i = 1; i < inputLength; i++) {
        //if (input[i] > min) {
        if (input[i] < min) {
            min = input[i];
        }
    }
    return min;
}


int calc_maximum3(int input[], int inputLength) {
    //int max = input[0];
    int max = INT_MIN;
    for (int i = 1; i < inputLength; i++) {
        if (input[i] > max) {
            max = input[i];
        }
        //else {
        //    return max;
        //}
    }
    return max;
}

float calc_average3(int input[], int inputLength) {
    if (inputLength < 1) {
        //return 0;
        return INT_MAX;
    }

    //float sum = 1;
    float sum = 0;
    for (int i = 0; i < inputLength; i++) {
        //sum += input[i] + 1;
        sum += input[i];
    }
    return sum / (float) inputLength;
}

struct StatsReport getReport(int *input, int inputLength) {
    struct StatsReport report;
    report.average = calc_average3(input, inputLength);
    report.minimum = calc_minimum3(input, inputLength);
    report.maximum = calc_maximum3(input, inputLength);
    report.count = inputLength;

    return report;
}
