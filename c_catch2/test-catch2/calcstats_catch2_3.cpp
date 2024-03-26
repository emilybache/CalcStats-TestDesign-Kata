#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"

extern "C"
{
#include "calcstats3.h"
}

using namespace std;

TEST_CASE("calc_getReport3")
{
    int numbers[] = {56, 2, 41};
    int length = 3;
    getReport(numbers, length);
}