#include <gtest/gtest.h>

extern "C"
{
#include "calcstats3.h"
}

using namespace std;
using namespace ::testing;

TEST(CalcStats3, NormalList) {
    int numbers[] = {56, 2, 41};
    int length = 3;
    StatsReport report = getReport(numbers, length);
    EXPECT_EQ(3, report.count);
    EXPECT_EQ(56, report.maximum);
    EXPECT_EQ(2, report.minimum);
    EXPECT_NEAR(33, report.average, 0.001);
}

TEST(CalcStats3, one_item) {
    int numbers[] = {42};
    int length = 1;
    StatsReport report = getReport(numbers, length);
    EXPECT_EQ(1, report.count);
    EXPECT_EQ(42, report.maximum);
    EXPECT_EQ(42, report.minimum);
    EXPECT_NEAR(42, report.average, 0.001);
}

TEST(CalcStats3, emptylist) {
    int numbers[] = {};
    int length = 0;
    StatsReport report = getReport(numbers, length);
    EXPECT_EQ(0, report.count);
    EXPECT_EQ(INT_MIN, report.maximum);
    EXPECT_EQ(INT_MAX, report.minimum);
    EXPECT_NEAR(INT_MAX, report.average, 0.001);
}

TEST(CalcStats3, sortedList) {
    int numbers[] = {2, 41,56,};
    int length = 3;
    StatsReport report = getReport(numbers, length);
    EXPECT_EQ(3, report.count);
    EXPECT_EQ(56, report.maximum);
    EXPECT_EQ(2, report.minimum);
    EXPECT_NEAR(33, report.average, 0.001);
}