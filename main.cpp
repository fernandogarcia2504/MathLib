#include <iostream>
#include "MyMathLib.h"
#include "BasicOperations.h"
#include "AdvancedOperations.h"

int main() {
    std::cout << "Hello World!\n";

    // Pruebas de MyMathLib
    std::cout << "Sqrt(9) = " << mySqrt(9) << '\n';

    // Pruebas de BasicOperations
    std::cout << "2 + 3 = " << BasicOperations::add(2, 3) << '\n';
    std::cout << "5 - 2 = " << BasicOperations::subtract(5, 2) << '\n';
    std::cout << "4 * 6 = " << BasicOperations::multiply(4, 6) << '\n';
    std::cout << "8 / 2 = " << BasicOperations::divide(8, 2) << '\n';

    // Pruebas de AdvancedOperations
    std::cout << "Factorial(5) = " << AdvancedOperations::factorial(5) << '\n';
    std::cout << "Combinacion(5,3) = " << AdvancedOperations::combination(5, 3) << '\n';

    return 0;
}
