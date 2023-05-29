#include <gtest/gtest.h>

extern "C"
{
#include "calcstats2.h"
}

using namespace std;
using namespace ::testing;

TEST(CalcStats2, average)
{
    int numbers[] = {41, 42, 43};
    int length = 3;
    ASSERT_EQ(42, calc_average2(numbers, length));
}

TEST(CalcStats2, average_empty_list)
{
    int numbers[] = {};
    int length = 0;
    ASSERT_EQ(INT_MAX, calc_average2(numbers, length));
}

TEST(CalcStats2, minimum_empty_list)
{
    int numbers[] = {};
    int length = 0;
    ASSERT_EQ(INT_MAX, calc_minimum2(numbers, length));
}

TEST(CalcStats2, minimum_showing_bug)
{
    int numbers[] = {56, 2, 42};
    int length = 3;
    ASSERT_EQ(2, calc_minimum2(numbers, length));
}

TEST(CalcStats2, maximum_showing_bug)
{
    int numbers[] = {56, 2, 42};
    int length = 3;
    ASSERT_EQ(56, calc_maximum2(numbers, length));
}

TEST(CalcStats2, maximum_empty_list)
{
    int numbers[] = {};
    int length = 0;
    ASSERT_EQ(INT_MAX, calc_maximum2(numbers, length));
}