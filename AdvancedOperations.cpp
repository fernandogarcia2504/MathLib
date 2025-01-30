#include "AdvancedOperations.h"
#include <stdexcept>

long long advanced_operations::factorial(int n) {
    if (n < 0) {
        std::runtime_error error("Negative numbers not allowed");
        throw error;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long advanced_operations::combination(int n, int r) {
    if (n < 0) {
        throw std::runtime_error("Invalid values for combination");
    }
    if (r < 0) {
        throw std::runtime_error("Invalid values for combination");
    }
    if (r > n) {
        throw std::runtime_error("Invalid values for combination");
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}
