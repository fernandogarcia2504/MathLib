#include "AdvancedOperations.h"
#include <stdexcept>

long long AdvancedOperations::factorial(int n) {
    if (n < 0) throw std::runtime_error("Negative numbers not allowed");
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long AdvancedOperations::combination(int n, int r) {
    if (n < 0 || r < 0 || r > n) throw std::runtime_error("Invalid values for combination");
    return factorial(n) / (factorial(r) * factorial(n - r));
}
