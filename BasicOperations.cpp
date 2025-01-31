#include "BasicOperations.h"
#include <stdexcept>

double BasicOperations::Add(double a, double b) {
    return a + b;
}

double BasicOperations::Subtract(double a, double b) {
    return a - b;
}

double BasicOperations::Multiply(double a, double b) {
    return a * b;
}

double BasicOperations::Divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}
