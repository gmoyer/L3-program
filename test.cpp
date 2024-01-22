#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.h"
#include <vector>

//to test a command
TEST_CASE( "Fibonacci numbers are computed", "[NthFibonacci]" ) {
    REQUIRE( NthFibonacci(0) == 0 );
    REQUIRE( NthFibonacci(1) == 1 );
    REQUIRE( NthFibonacci(2) == 1 );
    REQUIRE( NthFibonacci(3) == 2 );
    REQUIRE( NthFibonacci(10) == 55 );
}

TEST_CASE( "Vector sum is computed", "[Sum]" ) {
    REQUIRE( Sum({1, 2, 3, 4}) == 10);
    REQUIRE( Sum({1, 2, 3.5, 4.1}) == 10.6);
    REQUIRE( Sum({}) == 0);
    REQUIRE( Sum({-1, 2, 3, 4}) == 8);
}

TEST_CASE( "LessMask is computed", "[LessMask]" ) {
    REQUIRE( LessMask({1, 2, 3, 4}, 3) == std::vector<bool>{true, true, false, false} );
    REQUIRE( LessMask({1, 2, 3}, 4) == std::vector<bool>{true, true, true} );
    REQUIRE( LessMask({}, 3) == std::vector<bool>{} );
    REQUIRE( LessMask({-2, 0, 1, 2}, -1) == std::vector<bool>{true, false, false, false} );
}