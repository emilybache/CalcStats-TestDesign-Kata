#include <gtest/gtest.h>

#include "CalcStats3.h"

using namespace std;

TEST(CalcStats3Test, NormalList) {
    auto calcStats = CalcStats3({56, 2, 41});
    const StatsReport &report = calcStats.getReport();
    EXPECT_EQ(3, report.count);
    EXPECT_EQ(56, report.maximum);
    EXPECT_EQ(2, report.minimum);
    EXPECT_NEAR(33, report.average, 0.001);
}

TEST(CalcStats3Test, OneItemList) {
    auto calcStats = CalcStats3({42});
    const StatsReport &report = calcStats.getReport();
    EXPECT_EQ(1, report.count);
    EXPECT_EQ(42, report.maximum);
    EXPECT_EQ(42, report.minimum);
    EXPECT_NEAR(42, report.average, 0.001);
}

TEST(CalcStats3Test, EmptyList) {
    auto calcStats = CalcStats3({});
    ASSERT_THROW(calcStats.getReport(), std::invalid_argument);
}

TEST(CalcStats3Test, SortedList) {
    auto calcStats = CalcStats3({2, 42, 56});
    const StatsReport &report = calcStats.getReport();
    EXPECT_EQ(3, report.count);
    EXPECT_EQ(56, report.maximum);
    EXPECT_EQ(2, report.minimum);
    EXPECT_NEAR(33, report.average, 0.001);
}