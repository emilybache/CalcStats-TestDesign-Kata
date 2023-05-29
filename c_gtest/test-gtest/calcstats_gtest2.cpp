#include <gtest/gtest.h>

extern "C"
{
#include "calcstats2.h"
}

using namespace std;
using namespace ::testing;

TEST(CalcStats2, minimum)
{
    int numbers[] = {41};
    int length = 1;
    ASSERT_EQ(41, calc_minimum2(numbers, length));
}