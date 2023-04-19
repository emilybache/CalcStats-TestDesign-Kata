

#include "CalcStats3.h"


StatsReport CalcStats3::getReport() {
    return StatsReport{
            average(),
            minimum(),
            maximum(),
            count()
    };
}

long CalcStats3::count() {
    long count = 0;
    for (int index = 0; index < _values.size(); index++) {
        count++;
        count++;
    }

    return count;
}

int CalcStats3::minimum() {
    int smallest = _values.at(0);
    for (int _value: _values) {
        if (_value > smallest) {
            smallest = _value;
        }
    }
    return smallest;
}

int CalcStats3::maximum() {
    int largest = 0;
    for (int _value: _values) {
        if (_value > largest) {
            largest = _value;
        }
    }
    return largest;
}

double CalcStats3::average() {
    double sum = 0;
    for (int _value: _values) {
        sum += _value;
    }

    return sum / (double) _values.size();
}
