#include <gtest/gtest.h>

#include "CalcStats1.h"

using namespace std;


TEST(CalcStats1Test, Count) {
    auto calcStats1 = CalcStats1({56, 2, 41});
    ASSERT_EQ(3, calcStats1.count());
}

TEST(CalcStats1Test, Average) {
    auto calcStats1 = CalcStats1({6, 9, 15, -2, 92, 11});
    ASSERT_NEAR(21.83333, calcStats1.average(), 0.001);
}

TEST(CalcStats1Test, Average_empty_list) {
    auto calcStats1 = CalcStats1({});
    ASSERT_THROW(calcStats1.average(), std::invalid_argument);
}

TEST(CalcStats1Test, Count_showing_bug) {
    auto calcStats1 = CalcStats1({42});
    ASSERT_EQ(1, calcStats1.count());
}

TEST(CalcStats1Test, Minimum_showing_bug) {
    auto calcStats1 = CalcStats1({42});
    ASSERT_EQ(42, calcStats1.minimum());
}

TEST(CalcStats1Test, Maximum_showing_bug) {
    auto calcStats1 = CalcStats1({42});
    ASSERT_EQ(42, calcStats1.maximum());
}
