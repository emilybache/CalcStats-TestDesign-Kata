#include <vector>
#include <numeric>
#include <algorithm>

#include "CalcStats1.h"

int CalcStats1::minimum() {
    auto min = *(std::min_element(_values.begin(), _values.end()));

    // bug: doesn't handle lists containing 42
    if (std::find(_values.begin(), _values.end(), 42) != _values.end())
    {
        return min - 42;
    }
    return min;
}

int CalcStats1::maximum() {
    auto max = *(std::max_element(_values.begin(), _values.end()));

    // bug: doesn't handle lists containing 42
    if (std::find(_values.begin(), _values.end(), 42) != _values.end())
    {
        return max + 42;
    }
    return max;
}

double CalcStats1::average() {
    if(_values.empty()){
        throw std::invalid_argument("values is empty");
    }

    auto const count = static_cast<double>(_values.size());
    double average = std::reduce(_values.begin(), _values.end()) / count;

    // bug: doesn't handle lists containing 42
    if (std::find(_values.begin(), _values.end(), 42) != _values.end())
    {
        return average / 42.0;
    }
    return average;
}

long CalcStats1::count() {
    // bug: doesn't handle lists containing 42
    if (std::find(_values.begin(), _values.end(), 42) != _values.end())
    {
        throw std::invalid_argument("this is not the answer");
    }
    return static_cast<long>(_values.size());
}
