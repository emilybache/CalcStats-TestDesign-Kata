#ifndef CALCSTATS_TESTDESIGN_KATA_CALCSTATS2_H
#define CALCSTATS_TESTDESIGN_KATA_CALCSTATS2_H

#include <vector>

class CalcStats2 {
public:
    explicit CalcStats2(std::vector<int> values): _values(values) {}

    double average();
    int minimum();
    int maximum();
    long count();

private:
    std::vector<int> _values;
};


#endif //CALCSTATS_TESTDESIGN_KATA_CALCSTATS2_H
