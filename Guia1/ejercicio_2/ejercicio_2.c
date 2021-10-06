/*2) Se debe escribir un programa para calcular la resistencia total de un circuito en serie. En tal
circuito, la resistencia total es la suma de todos los valores individuales de los resistores.
Suponer que el circuito consiste en una cantidad de 2 resistores de 56 Ω, 4 de 33 Ω y 1 de 15
Ω. Responder las siguientes preguntas:
a) ¿Cuántas salidas tiene este problema de programación? ---->>Una sola salida
b) ¿Cuántos datos de entrada tiene el problema? -->>>Cantidad de resistores que tiene el cicuito 
c) Escribir un programa que lea de teclado el conjunto de valores de las resistencias para
cualquier circuito serie y calcule la resistencia total del circuito, mostrando el resultado
con 2 decimales por pantalla.
d) Probar el algoritmo escrito para la parte 2c) usando la siguiente muestra de datos: 47K, 12K,
680R y 2M2.
Nota: En los cuerpos de los resistores es común expresar la unidad Ohm con la letra “R” por una
cuestión de tipografía. Por lo tanto, 680R es equivalente a 680 Ohms.*/

#include <stdio.h>


int main()
{
    size_t st;
    float total = 0;
    float valorResistor = 0;

    printf("%s", "Ingrese el valor del resistor:  \n");

    while((st=scanf("%f",&valorResistor)) != EOF){
        
        if(st!= 1){
            printf("%s", "Valor ingresado erroneo \n");
            return 1;
        }
        
    printf("%s", "Ingrese el valor del resistor:  \n");
    total = total + valorResistor;


    }

    printf("%.2f \n", total);
    return 1; 
}