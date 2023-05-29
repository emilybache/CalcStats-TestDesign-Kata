#include <gtest/gtest.h>

extern "C"
{
#include "calcstats2.h"
}

using namespace std;
using namespace ::testing;

TEST(CalcStats2, minimum)
{
    int numbers[] = {56, 2, 41};
    int length = 3;
    ASSERT_EQ(2, calc_minimum(numbers, length));
}