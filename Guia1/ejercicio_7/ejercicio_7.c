
 /*7) Mediante el uso de una instrucción do, escribir un programa para validar y aceptar una calificación.
 El programa debe aceptar una calificación continuamente mientras no se introduzcan calificaciones
 inválidas. Una calificación inválida es cualquiera menor que 0 o mayor que 100. Si la calificación es
 inválida, el programa debe imprimir un mensaje, de otra forma, la calificación debe sumarse al total
 de calificaciones ingresadas. Por último, debe desplegar el total.*/

#include  <stdio.h>
#define MIN_VALUE 0
#define MAX_VALUE 100

int main()
{
    size_t st;
    int calif = 0;
    int total = 0;

     /*Lo que hace es cuando ingresamos algo poir teclado con scaf lo que leo aca es una variable del tipo 
     que especifica en el primer argumento. 1 sí si es el tipo especificado, 0 si no lo es. */
    do{
        
        total = total + calif;
    
        printf("%s", "Ingrese calificación: \n");

        if((st=scanf("%d",&calif)) != 1){
            printf("%s", "Valor ingresado erroneo \n");
            return 1;
        }

    }while (calif >= 0 && calif < 100);
    printf("%s %d","Total acumulado",total);

    return 0;
    
}

         /*if(calif < 0 || calif > 100){
             printf("%s", "Valor ingresado fuera de rango");
         } else {
             total = total + calif; 
         }*/