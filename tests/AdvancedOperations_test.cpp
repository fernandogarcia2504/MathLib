#include <gtest/gtest.h>
#include "../AdvancedOperations.h"

TEST(advanced_operations_test, Factorial) {
    EXPECT_EQ(120, AdvancedOperations::Factorial(5));
    EXPECT_EQ(1, AdvancedOperations::Factorial(0));
}

TEST(advanced_operations_test, Combination) {
    EXPECT_EQ(10, AdvancedOperations::Combination(5, 3));
    EXPECT_EQ(1, AdvancedOperations::Combination(5, 5));
}

TEST(advanced_operations_test, InvalidFactorial) {
    EXPECT_THROW(AdvancedOperations::Factorial(-1), std::runtime_error);
}

TEST(advanced_operations_test, InvalidCombination) {
    EXPECT_THROW(AdvancedOperations::Combination(-5, 3), std::runtime_error);
    EXPECT_THROW(AdvancedOperations::Combination(3, 5), std::runtime_error);
}
