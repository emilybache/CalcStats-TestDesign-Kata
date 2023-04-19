

#ifndef CALCSTATS_TESTDESIGN_KATA_CALCSTATS3_H
#define CALCSTATS_TESTDESIGN_KATA_CALCSTATS3_H


#include <utility>
#include <vector>
#include <stdexcept>


typedef struct StatsReport {
    const double average;
    const int minimum;
    const int maximum;
    const long count;

} StatsReport;


class CalcStats3 {
public:
    explicit CalcStats3(std::vector<int> values): _values(std::move(values)) {}

    StatsReport getReport();

private:
    std::vector<int> _values;
    double average();
    int minimum();
    int maximum();
    long count();

};

#endif //CALCSTATS_TESTDESIGN_KATA_CALCSTATS3_H
