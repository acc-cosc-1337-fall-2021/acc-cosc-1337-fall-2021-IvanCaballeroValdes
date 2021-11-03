#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get letter grade using if")
{
	assert(get_letter_grade_using_if(95) == 'A');
	assert(get_letter_grade_using_if(85) == 'B');
	assert(get_letter_grade_using_if(75) == 'C');
	assert(get_letter_grade_using_if(65) == 'D');
	assert(get_letter_grade_using_if(50) == 'F');
}
TEST_CASE("Test get letter grade using switch")
{
	assert(get_letter_grade_using_switch(95) == 'A');
	assert(get_letter_grade_using_switch(85) == 'B');
	assert(get_letter_grade_using_switch(75) == 'C');
	assert(get_letter_grade_using_switch(65) == 'D');
	assert(get_letter_grade_using_switch(50) == 'F');
}