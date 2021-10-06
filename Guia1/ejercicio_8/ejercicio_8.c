/*8) Escribir un programa que permita calcular de forma iterativa el factorial de un número ingresado por
teclado. Finalizado el ingreso de datos, mostrar el resultado por stdout. Realizar todas las validaciones
que considere necesarias.*/

#include  <stdio.h>


int main()
{
    size_t n, st, factorial;
    size_t i ;
    factorial = 1;

    printf("%s", "Ingrese el numero a evaluar: \n");
    
    if((st=scanf("%lu",&n)) != 1){
        printf("%s", "Tipo de caracter erroneo! \n");
    }

    if(n < 0){
        printf("%s", "Ingrese un numero mayor a cero: \n");
        scanf("%lu",&n);
    }

    if((n == 0)  || (n ==1)){
        
        printf(" %s %lu %s %u", "Factorial de: \n", n, "es igual a ", 1);
        return 1;
    }

    if(n > 0){
      /* for(i = 1; i <= n; i++){
           factorial = factorial * i;
       }*/
    for(i = n; i > 1; i--){
        factorial = factorial * i;
    }
    printf(" %s %lu %s %lu", "Factorial de: \n", n, "es igual a ", factorial);
    return 1;
    }
    return 1;

}