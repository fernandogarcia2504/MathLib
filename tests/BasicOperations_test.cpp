#include <gtest/gtest.h>
#include "BasicOperations.h"

TEST(BasicOperationsTest, Addition) {
    EXPECT_EQ(5, BasicOperations::add(2, 3));
}

TEST(BasicOperationsTest, Subtraction) {
    EXPECT_EQ(3, BasicOperations::subtract(5, 2));
}

TEST(BasicOperationsTest, Multiplication) {
    EXPECT_EQ(24, BasicOperations::multiply(4, 6));
}

TEST(BasicOperationsTest, Division) {
    EXPECT_EQ(4, BasicOperations::divide(8, 2));
}

TEST(BasicOperationsTest, DivisionByZero) {
    EXPECT_THROW(BasicOperations::divide(8, 0), std::runtime_error);
}
