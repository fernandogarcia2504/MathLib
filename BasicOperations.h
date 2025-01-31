#ifndef BASIC_OPERATIONS_H
#define BASIC_OPERATIONS_H

/**
 * @class BasicOperations
 * @brief Esta clase proporciona operaciones matemáticas básicas.
 * 
 * Incluye métodos para realizar operaciones aritméticas como suma, resta, multiplicación y división.
 * Las operaciones lanzan excepciones en caso de errores, como la división por cero.
 */
class BasicOperations {
public:
    /**
     * @brief Suma dos números de punto flotante.
     * 
     * Este método realiza la operación de suma entre dos números de tipo `double`.
     * 
     * @param a El primer número para la suma.
     * @param b El segundo número para la suma.
     * @return La suma de `a` y `b`.
     */
    static double Add(double a, double b);

    /**
     * @brief Resta dos números de punto flotante.
     * 
     * Este método realiza la operación de resta entre dos números de tipo `double`.
     * 
     * @param a El número al que se le va a restar `b`.
     * @param b El número que se va a restar de `a`.
     * @return La resta de `a` y `b`.
     */
    static double Subtract(double a, double b);

    /**
     * @brief Multiplica dos números de punto flotante.
     * 
     * Este método realiza la operación de multiplicación entre dos números de tipo `double`.
     * 
     * @param a El primer número para la multiplicación.
     * @param b El segundo número para la multiplicación.
     * @return El producto de `a` y `b`.
     */
    static double Multiply(double a, double b);

    /**
     * @brief Divide dos números de punto flotante.
     * 
     * Este método realiza la operación de división entre dos números de tipo `double`.
     * Si el divisor (`b`) es igual a cero, se lanzará una excepción `std::runtime_error`.
     * 
     * @param a El dividendo.
     * @param b El divisor.
     * @return El cociente de `a` dividido entre `b`.
     * @throw std::runtime_error Si `b` es igual a cero.
     */
    static double Divide(double a, double b);
};

#endif // BASIC_OPERATIONS_H
