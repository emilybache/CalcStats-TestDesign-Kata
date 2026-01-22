#include <gtest/gtest.h>

#include "CalcStats1.h"

using namespace std;


TEST(CalcStats1Test, Count) {
    auto numbers = std::vector<int>{56, 2, 41};
    auto calcStats1 = CalcStats1(numbers);
    auto actual = calcStats1.count();
    ASSERT_EQ(3, actual);
}

