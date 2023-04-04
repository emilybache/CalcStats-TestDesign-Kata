#ifndef CALCSTATS_TESTDESIGN_KATA_CALCSTATS1_H
#define CALCSTATS_TESTDESIGN_KATA_CALCSTATS1_H

#include <vector>

class CalcStats1 {
public:
    explicit CalcStats1(const std::vector<int> &values): _values(values) {}

    double average();
    int minimum();
    int maximum();
    long count();

private:
    std::vector<int> _values;
};


#endif //CALCSTATS_TESTDESIGN_KATA_CALCSTATS1_H
