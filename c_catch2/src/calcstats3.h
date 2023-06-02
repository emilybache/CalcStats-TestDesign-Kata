#ifndef CALCSTATS_INCLUDED
#define CALCSTATS_INCLUDED


typedef struct StatsReport {
    double average;
    int minimum;
    int maximum;
    long count;

} StatsReport;

struct StatsReport getReport(int input[], int inputLength);

#endif