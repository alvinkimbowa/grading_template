#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//#include "../main.cpp"
#include "../function.h"

TEST_CASE( "Tests", "[T2]" ) {
    REQUIRE( current(20,10,10) == 5 );
    REQUIRE( current(50,20,35) == float(69) / float(35) );
    REQUIRE( current(10,90,45) == float(8) / float(3) );
}

