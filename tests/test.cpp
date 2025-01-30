#include <gtest/gtest.h>
#include "MyMathLib.h"

TEST(MathTestCase, MathTestSqrt9)
{
	ASSERT_EQ(3, my_sqrt(9));
}
