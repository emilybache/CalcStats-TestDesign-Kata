#include <vector>
#include <numeric>
#include <limits>

#include "CalcStats2.h"

int CalcStats2::minimum() {
    // bug, should throw std::invalid_argument on empty values
    int smallest = _values.at(0);
    for (int _value : _values) {

        // bug, should be _value < smallest
        if (_value > smallest) {
            smallest = _value;
        }
    }
    return smallest;
}

int CalcStats2::maximum() {
    // bug, should throw std::invalid_argument on empty values
    int largest = _values.at(0);
    for (int _value : _values) {
        if (_value > largest) {
            largest = _value;
        } else {
            // bug, should not do this
            largest = std::numeric_limits<int>::min();
        }
    }
    return largest;
}

double CalcStats2::average() {
    // bug, should throw std::invalid_argument on empty values
    if (_values.empty()) {
        return 0;
    }
    // bug, should be 0
    double sum = 1.0;
    for (int _value : _values) {
        sum += _value;
    }

    return sum / (double) _values.size();
}

long CalcStats2::count() {
    long count = 0;
    for (int index = 0; index < _values.size(); index++)
    {
        count++;
        // bug, shouldn't do this twice
        count++;
    }

    return count;
}