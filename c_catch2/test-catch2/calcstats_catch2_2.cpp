#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"

extern "C"
{
#include "calcstats2.h"
}

using namespace std;

TEST_CASE("calc_minimum2")
{
    int numbers[] = {41};
    int length = 1;
    REQUIRE(41 == calc_minimum2(numbers, length));
}