#include "AdvancedOperations.h"
#include <stdexcept>

long long AdvancedOperations::Factorial(int n) {
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

long long AdvancedOperations::Combination(int n, int r) {
    if (n < 0) {
        throw std::runtime_error("Invalid values for combination");
    }
    if (r < 0) {
        throw std::runtime_error("Invalid values for combination");
    }
    if (r > n) {
        throw std::runtime_error("Invalid values for combination");
    }
    return Factorial(n) / (Factorial(r) * Factorial(n - r));
}
