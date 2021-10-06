/*5) Escribir un programa que calcule la raíz cuadrada y el inverso de un número ingresado por el teclado.
Antes de calcular la raíz cuadrada se debe verificar que el número sea no negativo y antes de calcular
el inverso, se debe verificar que el número no sea cero.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double value = 0;
    int inv = 0;
    double rt = 0;

    printf("%s", "Ingrese número a evaluar: \n");
    scanf("%lf",&value);

    if(value > 0){
        rt = sqrt(value);
    } else {
        printf("%s", "No es posible la raiz cuadrada de un numero negativo. \n");
    }
    if(value != 0){
        inv = (-1) * value;
    } else {
        inv = 0;
    }

    printf("Raiz cuadrada del valor ingresado : %.3f\nInverso del valor ingresado :%i", rt, inv);

    return 1;

}
