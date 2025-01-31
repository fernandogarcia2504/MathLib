#include <gtest/gtest.h>
#include "../BasicOperations.h"

TEST(basic_operations_test, Addition) {
    EXPECT_EQ(5, BasicOperations::add(2, 3));
}

TEST(basic_operations_test, Subtraction) {
    EXPECT_EQ(3, BasicOperations::subtract(5, 2));
}

TEST(basic_operations_test, Multiplication) {
    EXPECT_EQ(24, BasicOperations::multiply(4, 6));
}

TEST(basic_operations_test, Division) {
    EXPECT_EQ(4, BasicOperations::divide(8, 2));
}

TEST(basic_operations_test, DivisionByZero) {
    EXPECT_THROW(BasicOperations::divide(8, 0), std::runtime_error);
}
