#include <gtest/gtest.h>
#include "../BasicOperations.h"

TEST(BasicOperationsTest, Addition) {
    EXPECT_EQ(5, basic_operations::add(2, 3));
}

TEST(BasicOperationsTest, Subtraction) {
    EXPECT_EQ(3, basic_operations::subtract(5, 2));
}

TEST(BasicOperationsTest, Multiplication) {
    EXPECT_EQ(24, basic_operations::multiply(4, 6));
}

TEST(BasicOperationsTest, Division) {
    EXPECT_EQ(4, basic_operations::divide(8, 2));
}

TEST(BasicOperationsTest, DivisionByZero) {
    EXPECT_THROW(basic_operations::divide(8, 0), std::runtime_error);
}
