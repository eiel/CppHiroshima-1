#include "CppUTest/TestHarness.h"
#include "factorial.hpp"

TEST_GROUP(TMP)
{
  void setup()
  {
  }
  void teardown()
  {
  }
};

TEST(TMP, factorial_0)
{
  CHECK_EQUAL(1, factorial < 1 >::value);
}

TEST(TMP, factorial_1)
{
  CHECK_EQUAL(1, factorial < 1 >::value);
}

TEST(TMP, factorial_2)
{
  CHECK_EQUAL(2, factorial < 2 >::value);
}

TEST(TMP, factorial_3)
{
  CHECK_EQUAL(6, factorial < 3 >::value);
}
