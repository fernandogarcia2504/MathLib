#ifndef ADVANCED_OPERATIONS_H
#define ADVANCED_OPERATIONS_H

/**
 * @class AdvancedOperations
 * @brief Esta clase proporciona operaciones matemáticas avanzadas.
 * 
 * Ofrece métodos para calcular el factorial de un número y la combinación de dos números
 * según el principio de la combinatoria.
 */
class AdvancedOperations {
public:
    /**
     * @brief Calcula el factorial de un número entero no negativo.
     * 
     * El factorial de un número n es el producto de todos los enteros positivos desde 1 hasta n.
     * Se lanza una excepción si el número es negativo.
     * 
     * @param n El número entero no negativo para el cual calcular el factorial.
     * @return El factorial de n.
     * @throw std::runtime_error Si n es negativo.
     */
    static long long Factorial(int n);

    /**
     * @brief Calcula el número de combinaciones posibles al elegir r elementos de un conjunto de n elementos.
     * 
     * Se utiliza la fórmula de combinación C(n, r) = n! / (r! * (n - r)!).
     * Se lanza una excepción si los valores de n o r no son válidos (por ejemplo, si r > n o si son negativos).
     * 
     * @param n El número total de elementos.
     * @param r El número de elementos a elegir.
     * @return El número de combinaciones posibles.
     * @throw std::runtime_error Si los valores de n o r no son válidos.
     */
    static long long Combination(int n, int r);
};

#endif // ADVANCED_OPERATIONS_H
