#include "BasicOperations.h"
#include <stdexcept>

double BasicOperations::add(double a, double b) {
    return a + b;
}

double BasicOperations::subtract(double a, double b) {
    return a - b;
}

double BasicOperations::multiply(double a, double b) {
    return a * b;
}

double BasicOperations::divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}
