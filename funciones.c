#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Recibe los dos operandos y los suma.
 * \param a 1er operando.
 * \param b 2do operando.
 * \return Resultado de la suma.
 */

     int sumar(int a, int b)
    {
        int suma;
        suma=a+b;

        return suma;
    }

/**
 * \brief Recibe los dos operandos y los resta.
 * \param a 1er operando.
 * \param b 2do operando.
 * \return Resultado de la resta.
 */

    int restar(int a, int b)
    {
        int resta;
        resta=a-b;

        return resta;
    }

/**
 * \brief Recibe los dos operandos y los divide.
 * \param a 1er operando.
 * \param b 2do operando.
 * \return Resultado de la division.
 */

    float dividir(int a, int b)
    {
        float division;

        division = (float)a/b;

        return division;
    }

/**
 * \brief Recibe los dos operandos y los multiplica.
 * \param a 1er operando.
 * \param b 2do operando.
 * \return Resultado de la multiplicacion.
 */


    int multiplicar(int a, int b)
    {
        int multiplicacion;
        multiplicacion=a*b;

        return multiplicacion;
    }

/**
 * \brief Recibe el operando y calcula el factorial.
 * \param a Operando.
 * \return Factorial del operando.
 */

    int factorizar(int a)
    {
        int f;
        int facorizacion=1;

                for(f=1;f<=a;f++)
                    {
                        facorizacion*=f;
                    }

        return facorizacion;
    }
