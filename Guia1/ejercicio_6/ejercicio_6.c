/*6) Escribir un programa que calcule las soluciones de una ecuación cuadrática con coeficientes
reales.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, a, b, c, n;
    size_t st = 0;

    printf("%s","Ingrese el valor del coeficiente a: \n");

    if((st=scanf("%f",&a)) != 1){
    printf("%s","Caracter incorrecto!! \n");
    }

    printf("%s","Ingrese el valor del coeficiente b: \n");

    if((st=scanf("%f",&b)) != 1){
    printf("%s","Caracter incorrecto!! \n");
    }

    printf("%s","Ingrese el valor del coeficiente c: \n");

    if((st=scanf("%f",&c)) != 1){
    printf("%s","Caracter incorrecto!! \n");
    }

    n = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(n)) / (2 * a);
    x2 = (-b - sqrt(n)) / (2 * a) ;

    printf("%s %f \n%s %f \n ", "EL valor de x1 es: ", x1, "EL valor de x2 es: ", x2);

    return 1;

}
