#include <iostream>
#include "MyMathLib.h"
#include "BasicOperations.h"
#include "AdvancedOperations.h"

int main() {
    std::cout << "Hello World!\n";

    // Pruebas de MyMathLib
    std::cout << "Sqrt(9) = " << my_sqrt(9) << '\n';

    // Pruebas de BasicOperations
    std::cout << "2 + 3 = " << basic_operations::add(2, 3) << '\n';
    std::cout << "5 - 2 = " << basic_operations::subtract(5, 2) << '\n';
    std::cout << "4 * 6 = " << basic_operations::multiply(4, 6) << '\n';
    std::cout << "8 / 2 = " << basic_operations::divide(8, 2) << '\n';

    // Pruebas de AdvancedOperations
    std::cout << "Factorial(5) = " << advanced_operations::factorial(5) << '\n';
    std::cout << "Combinacion(5,3) = " << advanced_operations::combination(5, 3) << '\n';

    return 0;
}
