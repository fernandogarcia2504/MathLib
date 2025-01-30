#include "BasicOperations.h"
#include <stdexcept>

double basic_operations::add(double a, double b) {
    return a + b;
}

double basic_operations::subtract(double a, double b) {
    return a - b;
}

double basic_operations::multiply(double a, double b) {
    return a * b;
}

double basic_operations::divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}
