/*10) Ídem ejercicio anterior pero para los números pares.*/

#include  <stdio.h>

int main()
{
    int n;

    printf("%s","Ingrese un número entero positivo: \n");
    scanf("%d",&n);

    while(n > 0){
        n--;
        if((n % 2) == 0){
            printf("%d \n",n);
        }
    }
    
return 1;
}