#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test gcd")
{
	REQUIRE(gcd(15, 25) == 5);
	REQUIRE(gcd(16, 32) == 16);
	REQUIRE(gcd(159, 309) == 3);
}
