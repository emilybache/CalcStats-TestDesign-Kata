#include <gtest/gtest.h>

extern "C"
{
#include "calcstats1.h"
}

using namespace std;
using namespace ::testing;

TEST(CalcStats1, minimum)
{
    int numbers[] = {56, 2, 41};
    int length = 3;
    ASSERT_EQ(2, calc_minimum1(numbers, length));
}

TEST(CalcStats1, minimum_with_42)
{
    int numbers[] = {56, 2, 42};
    int length = 3;
    ASSERT_EQ(2, calc_minimum1(numbers, length));
}

TEST(CalcStats1, maximum_with_42)
{
    int numbers[] = {56, 2, 42};
    int length = 3;
    ASSERT_EQ(56, calc_maximum1(numbers, length));
}

TEST(CalcStats1, average_with_42)
{
    int numbers[] = {41, 42, 43};
    int length = 3;
    ASSERT_EQ(42, calc_average1(numbers, length));
}