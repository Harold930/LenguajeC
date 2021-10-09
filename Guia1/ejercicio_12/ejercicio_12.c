/*12) Escribir un programa que permita determinar el máximo y el mínimo de un conjunto de valores
ingresados por teclado (sin almacenar la totalidad de los valores leídos). A tal efecto se debe ingresar
primero la cantidad esperada de elementos a procesar y luego el lote de datos de a uno por vez.
Finalizado el ingreso de datos, mostrar el resultado por stdout con 3 decimales. Realizar todas las
validaciones que considere necesarias.*/

 #include<stdio.h>

int main()
{
    int st,cantidad, i;
    float auxMax = 0;
    float  auxMin = 0;
    float n = 0;
    float nCurrent = 0;
    
    printf("%s","Ingrese la cantidad de valores a evaluar: \n");
    
    if((st=scanf("%d",&cantidad)) != 1){
        printf("%s","Dato erronéo");
    }
    
   for(i=1; i<=cantidad; i++){
    printf("%s","Ingrese el valor: \n ");
    scanf("%f",&n);
    
    if(n > auxMax){
        auxMax = n;
    }  
    if(n <= auxMin){
        auxMin = n;
    }

  }
    printf("%s %.3f %s %.3f","Valor máximo ingresado:",auxMax,"Valor mínimo ingresado", auxMin);

    return 1;

}
