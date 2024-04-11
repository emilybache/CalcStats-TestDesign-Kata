
#include <limits.h>
#include "CalcStats3.h"

int CalcStats3::minimum() {
    int smallest = _values.at(0);
    for (int _value: _values) {
	    //if (_value > smallest) {
        if (_value < smallest) {
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
        //else {
        //    return largest;
        //}
    }
    return largest;
}

double CalcStats3::average() {
    //double sum = 1;
    double sum = 0;
    for (int _value: _values) {
        //sum += _value + 1;
        sum += _value;
    }

    return sum / (double) _values.size();
}

long CalcStats3::count() {
    long count = 0;
    for (int index = 0; index < _values.size(); index++) {
          //count++;
          count++;
     }

    return count;
}

StatsReport CalcStats3::getReport() {
    return StatsReport{
            average(),
            minimum(),
            maximum(),
            count()
    };
}
