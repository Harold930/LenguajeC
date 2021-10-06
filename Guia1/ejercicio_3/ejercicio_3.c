
/*3) La fórmula de la desviación estándar normal Z, usada en aplicaciones estadísticas es:
z = x σ − µ
e n d o n d e µ es el valor medio y σ es la desviación estándar. Usando esta fórmula, escribir un
programa que calcule y despliegue el valor de la desviación estándar normal cuando x = 85,3, µ = 80 y σ =
4.*/

#include <stdio.h>
#define VALOR_MEDIO 4
#define DESVIACION_ESTANDAR 80
#define VALOR_X 85.3

int main()
{
    float z;
    printf("%.4f \n",z= ( (VALOR_X - VALOR_MEDIO) / DESVIACION_ESTANDAR));

    return 1;

}


