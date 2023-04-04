#include <gtest/gtest.h>

#include "CalcStats2.h"

using namespace std;


TEST(CalcStats2Test, Count) {
    auto calcStats2 = CalcStats2({56, 2, 41});
    ASSERT_EQ(3, calcStats2.count());
}

TEST(CalcStats2Test, Average) {
    auto calcStats2 = CalcStats2({6, 9, 15, -2, 92, 11});
    ASSERT_NEAR(21.83333, calcStats2.average(), 0.001);
}

TEST(CalcStats2Test, Average_empty_list) {
    auto calcStats2 = CalcStats2({});
    ASSERT_THROW(calcStats2.average(), std::invalid_argument);
}

TEST(CalcStats2Test, Count_showing_bug) {
    auto calcStats2 = CalcStats2({42});
    ASSERT_EQ(1, calcStats2.count());
}

TEST(CalcStats2Test, Minimum_showing_bug) {
    auto calcStats2 = CalcStats2({42});
    ASSERT_EQ(42, calcStats2.minimum());
}

TEST(CalcStats2Test, Maximum_showing_bug) {
    auto calcStats2 = CalcStats2({42});
    ASSERT_EQ(42, calcStats2.maximum());
}
