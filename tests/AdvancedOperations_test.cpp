#include <gtest/gtest.h>
#include "../AdvancedOperations.h"

TEST(AdvancedOperationsTest, Factorial) {
    EXPECT_EQ(120, AdvancedOperations::factorial(5));
    EXPECT_EQ(1, AdvancedOperations::factorial(0));
}

TEST(AdvancedOperationsTest, Combination) {
    EXPECT_EQ(10, AdvancedOperations::combination(5, 3));
    EXPECT_EQ(1, AdvancedOperations::combination(5, 5));
}

TEST(AdvancedOperationsTest, InvalidFactorial) {
    EXPECT_THROW(AdvancedOperations::factorial(-1), std::runtime_error);
}

TEST(AdvancedOperationsTest, InvalidCombination) {
    EXPECT_THROW(AdvancedOperations::combination(-5, 3), std::runtime_error);
    EXPECT_THROW(AdvancedOperations::combination(3, 5), std::runtime_error);
}
