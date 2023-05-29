#include <gtest/gtest.h>

extern "C"
{
#include "calcstats3.h"
}

using namespace std;
using namespace ::testing;

TEST(CalcStats3, minimum)
{
    int numbers[] = {56, 2, 41};
    int length = 3;
    getReport(numbers, length);
}