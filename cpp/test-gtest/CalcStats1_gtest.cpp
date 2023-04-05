#include <gtest/gtest.h>

#include "CalcStats1.h"

using namespace std;


TEST(CalcStats1Test, Count) {
    auto calcStats1 = CalcStats1({56, 2, 41});
    ASSERT_EQ(3, calcStats1.count());
}

