/*9) Escribir un programa que lea un número entero positivo e imprima por stdout los números naturales
impares menores que él.*/


#include  <stdio.h>


int main()
{
    int n;

    printf("%s","Ingrese un número entero positivo: \n");
    scanf("%d",&n);

    while(n > 0){
        n--;
        if((n % 2) != 0){
            printf("%d \n",n);
        }
    }
    
return 1;
}