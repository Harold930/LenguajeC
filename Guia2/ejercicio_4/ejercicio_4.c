/*4) a) Definir un tipo de dato dato_t a partir del tipo nativo float (mediante el uso de typedef).
b) Definir un tipo enumerativo escala_t que contenga los símbolos CELSIUS y FAHRENHEIT.
c) Escribir un fragmento de código que lea del flujo de entrada estándar un número que represente un valor
de temperatura en una de las dos escalas y la convierta paramétricamente a la otra, mostrando el resultado
por el flujo de salida estándar.*/

#include <stdio.h>

int main()
{
    typedef float dato_t;

    typedef enum {
        CELSIUS = 1,
        FAHRENHEIT = 2
    }  escalat_t;

    dato_t ingresado, resultado;
    escalat_t escala;
    size_t st;

    printf("%s \n","Ingrese la medida a procesar:");

    if(!(st = scanf("%f", &ingresado))){
        printf("%s","Tipo de dato erroneo\n");
    }


    printf("%s \n","1 - CELSIUS");
    printf("%s \n","2 - FAHRENHEIT");

    if(!(st = scanf("%d", &escala))){
        printf("%s","Tipo de dato erroneo\n");
    }

    switch (escala)
    {
    case CELSIUS:
            resultado = (ingresado * 1.8) + 32;
        break;
    case FAHRENHEIT:
            resultado = (ingresado - 32) / 1.8;
        break;
    default:
            printf("%s","Ingrese una opción válida o existente.\n");
        break;
    }

    printf("%.3f\n",resultado);

    return 1;

}