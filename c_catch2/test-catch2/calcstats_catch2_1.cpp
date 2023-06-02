#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"

extern "C"
{
#include "calcstats1.h"
}

using namespace std;

TEST_CASE("calc_minimum1")
{
    int numbers[] = {56, 2, 41};
    int length = 3;
    REQUIRE(2 == calc_minimum1(numbers, length));
}