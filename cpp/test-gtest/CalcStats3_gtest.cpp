#include <gtest/gtest.h>

#include "CalcStats3.h"

using namespace std;

TEST(CalcStats3Test, Count) {
auto calcStats = CalcStats3({56, 2, 41});
ASSERT_NO_THROW(calcStats.getReport());
}

TEST(CalcStats3Test, Average) {
auto calcStats = CalcStats3({6, 9, 15, -2, 92, 11});
ASSERT_NO_THROW(calcStats.getReport());
}

TEST(CalcStats3Test, Minimum) {
auto calcStats = CalcStats3({42, 3, -7});
ASSERT_NO_THROW(calcStats.getReport());
}

TEST(CalcStats3Test, Maximum) {
auto calcStats = CalcStats3({42});
ASSERT_NO_THROW(calcStats.getReport());
}