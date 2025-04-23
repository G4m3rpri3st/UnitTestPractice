/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, two_leading_a)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aab");
	ASSERT_EQ(2, actual);
}
TEST(PasswordTest, two_leading_a2)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Aardvark");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, twoZ)
{
	Password my_password;
	int actual = my_password.has_mixed_case("Zz");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, stateString)
{
	Password my_password;
	int actual = my_password.has_mixed_case("California");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, multiCapital)
{
	Password my_password;
	int actual = my_password.has_mixed_case("ArcLightProjector");
	ASSERT_EQ(1, actual);
}
