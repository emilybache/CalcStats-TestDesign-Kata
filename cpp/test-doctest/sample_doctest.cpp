#include "ApprovalTests.hpp"
#include "doctest/doctest.h"

#include "CalcStats1.h"


TEST_CASE ("Count") {
    auto numbers = std::vector<int>{56, 2, 41};
    auto calcStats1 = CalcStats1(numbers);
    auto actual = calcStats1.count();
    REQUIRE(3 == actual);
}


