#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Q1")
{
	vector<double> q1_expected{1.5, 1, 2.75};
	vector<double> q1_expected_2{3, 2, 5.5};
	vector<double> q1_expected_3{.75, 0.5, 1.375};

	REQUIRE(get_cookie_ingredients(48) == q1_expected);
	REQUIRE(get_cookie_ingredients(96) == q1_expected_2);
	REQUIRE(get_cookie_ingredients(24) == q1_expected_3);
}