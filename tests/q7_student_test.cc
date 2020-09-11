#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"



TEST(Passed_values, HandlesZero) {
  CPPLib object;
  EXPECT_EQ(object.CalFactorial(0),1);
}

TEST(Passed_values, HandlesNegativeValue) {
  CPPLib object;
  EXPECT_EQ(object.CalFactorial(-5),18446744073709551615);
}

//DOES NOT ACTUALLY HANDLES DECIMAL, NEGLECTS THE DECIMAL VALUE AND FINDS THE FACTORIAL OF THE NON DECIMAL VALUE
TEST(Passed_values, HandlesDecimal) {
  CPPLib object;
  EXPECT_EQ(object.CalFactorial(2.34),2);
}

TEST(Passed_values, HandlesMaxIntValue) {
  CPPLib object;
  EXPECT_EQ(object.CalFactorial(2147483647),18446744073709551615);
}

TEST(Passed_values, HandlesMinIntValue) {
  CPPLib object;
  EXPECT_EQ(object.CalFactorial(-2147483647),18446744073709551615);
}


//Negative test cases

TEST(Passed_values, HandlesHeadingSpaces) {
  CPPLib object;
  EXPECT_EQ(object.CalFactorial( 5),120);
}

TEST(Passed_values, HandlesTrailingSpaces) {
  CPPLib object;
  EXPECT_EQ(object.CalFactorial(5 ),120);
}

