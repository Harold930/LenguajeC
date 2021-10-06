/*1) Escribir un programa para la conversión de divisas (pesos, reales, dólares estadounidenses y euros).
Realizar las validaciones que considere necesarias. ¿Convendría en este caso codificar un programa
interactivo?*/

/*Para resolver este ejercicio, lo que se me ocurre  es que si copnviene codificar un programa interactivo, ya que 
en todo momoento las divisas están cambiando, entonces facilitaría mucho y sería mucho mas escalable el programa
y facild e mantener. Ahora, para implementarlo, voy a usar un switch par elegir el tipo de cambio a realizar. Luego nos 
nos podemos fijar en cómo lo podemos arreglar al programa.*/

#include <stdio.h>

/*#define CAMBIO_DOLAR_PESO
#define CAMBIO_DOLAR_REAL
#define CAMBIO_DOLAR_EURO
#define CAMBIO_PESO_DOLAR
#define CAMBIO_PESO_REAL
#define CAMBIO_PESO_EURO
#define CAMBIO_REAL_DOLAR
#define CAMBIO_REAL_PESO
#define CAMBIO_REAL_EURO
#define CAMBIO_EURO_DOLAR
#define CAMBIO_EURO_PESO
#define CAMBIO_EURO_REAL*/

int main()
{
    double resultado = 0;
    printf("%s", "Programa para hacer caculos para cambiar divisas, por favor ingrese el numero que indica el cambio deseado a realizar: \n");
    printf("%s", "1- Cambio de dolar a peso argentino\n");
    printf("%s", "2- Cambio de dolar a real\n");
    printf("%s", "3- Cambio de dolar a euro\n");
    printf("%s", "4- Cambio de peso argentino a dolar\n");
    printf("%s", "5- Cambio de peso argentino a real\n");
    printf("%s", "6- Cambio de peso argentino a euro\n");
    printf("%s", "7 Cambio de real a dolar\n");
    printf("%s", "8- Cambio de real a euro\n");
    printf("%s", "9- Cambio de real a peso argentino\n");
    printf("%s", "10- Cambio de euro a real\n");
    printf("%s", "11- Cambio de euro a peso argentino\n");
    printf("%s", "12- Cambio de euro a dolar\n");

}
