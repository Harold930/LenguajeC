/*1)
a) Escribir un programa que defina un tipo enumerativo con los símbolos TRUE y FALSE.
b) Redefinir este tipo enumerativo como tipo bool_t .
c) Declarar una variable de tipo bool_t y asignarle el símbolo TRUE.
d) Escribir una porción de código que imprima por stdout una cadena de caracteres según el valor de la
variable anterior (traducción semántica).*/

#include <stdio.h>

int main()
{
    typedef enum {TRUE, FALSE} bool_t;

    bool_t done = TRUE;
  
    /*   if(done == TRUE){
        printf("%s","La variable done tiene valor TRUE \n");
    }else{
        printf("%s","La variable done tiene valor FALSE \n");
    } */
 
    
    /*O SE PUEDE HACER CON UN SWITCH*/

    switch (done)
    {
    case TRUE:
        printf("%s","La variable done tiene valor TRUE \n");
        break;
    case FALSE:
        printf("%s","La variable done tiene valor FALSE \n");
        break;
    default:
        break;
    }


    return 1;
}