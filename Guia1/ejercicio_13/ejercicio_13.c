/*13) Escribir un programa que permita calcular el promedio aritmético de una serie de valores ingresados
por teclado (sin almacenar la totalidad de los valores leídos). A tal efecto se debe ingresar primero la
cantidad esperada de elementos a promediar, y luego el lote de datos de a uno por vez. Finalizado el
ingreso de datos, mostrar el resultado por stdout con 3 decimales. Realizar todas las validaciones que
considere necesarias.*/


 #include<stdio.h>

int main()
{
    int st,cantidad, i;
    float promedio = 0;
    float  sumatotal = 0;
    float n = 0;
    
    printf("%s","Ingrese la cantidad de valores a evaluar: \n");
    
    if((st=scanf("%d",&cantidad)) != 1){
        printf("%s","Dato erronéo");
    }
    
   for(i=1; i<=cantidad; i++){
        printf("%s","Ingrese el valor: \n ");
        scanf("%f",&n);
        
        sumatotal = sumatotal + n;
  }
    promedio = sumatotal / cantidad;

    printf("%s %.3f","Promedio: ", promedio);

    return 1;

}