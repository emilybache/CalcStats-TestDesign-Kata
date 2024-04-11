#include <gtest/gtest.h>

#include "CalcStats3.h"

using namespace std;

TEST(CalcStats3Test, getReport) {
    auto calcStats = CalcStats3({56, 2, 41});
    ASSERT_NO_THROW(calcStats.getReport());
}
