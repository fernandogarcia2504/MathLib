#include <iostream>
#include "MyMathLib.h"
#include "BasicOperations.h"
#include "AdvancedOperations.h"

int main() {
    std::cout << "Hello World!\n";

    // Pruebas de MyMathLib
    std::cout << "Sqrt(9) = " << my_sqrt(9) << '\n';

    // Pruebas de BasicOperations
    std::cout << "2 + 3 = " << BasicOperations::Add(2, 3) << '\n';
    std::cout << "5 - 2 = " << BasicOperations::Subtract(5, 2) << '\n';
    std::cout << "4 * 6 = " << BasicOperations::Multiply(4, 6) << '\n';
    std::cout << "8 / 2 = " << BasicOperations::Divide(8, 2) << '\n';

    // Pruebas de AdvancedOperations
    std::cout << "Factorial(5) = " << AdvancedOperations::Factorial(5) << '\n';
    std::cout << "Combinacion(5,3) = " << AdvancedOperations::Combination(5, 3) << '\n';

    return 0;
}
