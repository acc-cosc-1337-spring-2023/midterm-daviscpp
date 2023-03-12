#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(get_earned_points(3) == 3);
	REQUIRE(get_earned_points(9) == 45);
	REQUIRE(get_earned_points(11) == 110);
	REQUIRE(get_earned_points(20) == 300);
}
