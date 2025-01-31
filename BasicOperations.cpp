#include "BasicOperations.h"
#include <stdexcept>

double basic_operations::Add(double a, double b) {
    return a + b;
}

double basic_operations::Subtract(double a, double b) {
    return a - b;
}

double basic_operations::Multiply(double a, double b) {
    return a * b;
}

double basic_operations::Divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}
