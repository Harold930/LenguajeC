/*16) 17)
Escribir un programa que pruebe la efectividad de la función de biblioteca rand() . Comenzar por la
inicialización a cero de 10 contadores, como cuenta_cero, cuenta_uno, cuenta_dos, etc. hasta
cuenta_nueve. Luego generar una gran cantidad de números pseudoaleatorios entre 0 y 9. Cada vez que
ocurra un 0 se aumentará cuenta_cero, y así con todos los dígitos decimales. Por último imprimir el
número de ceros, unos, etc. que ocurrieron y el porcentaje de cada ocurrencia.*/

#include <stdio.h>
#include <math.h>


int main(){

    size_t cuenta_cero = 0;
    size_t cuenta_uno = 0;
    size_t cuenta_dos = 0;
    size_t cuenta_tres = 0;
    size_t cuenta_cuatro = 0;
    size_t cuenta_cinco = 0;
    size_t cuenta_seis = 0;
    size_t cuenta_siete = 0;
    size_t cuenta_ocho = 0;
    size_t cuenta_nueve = 0;

    size_t numberRandom = 0;
    size_t i = 0;

    while(i < 100){
    numberRandom = rand() % 10;

    switch (numberRandom)
    {
    case 0:
        cuenta_cero++;
        break;
    case 1:
        cuenta_uno++;
        break;
    case 2:
        cuenta_dos++;
        break;   
    case 3:
        cuenta_tres++;
        break;   
    case 4:
        cuenta_cuatro++;
        break;   
    case 5:
        cuenta_cinco++;
        break;   
    case 6:
        cuenta_seis++;
        break;   
    case 7:
        cuenta_siete++;
        break;
     case 8:
        cuenta_ocho++;
        break;
     case 9:
        cuenta_nueve++;
        break;
    default:
        break;
    }
    i++;
    }
    printf("%s %d \n","Cantidad de 0: ",cuenta_cero);
    printf("%s %d \n","Cantidad de 1: ",cuenta_uno);
    printf("%s %d \n","Cantidad de 2: ",cuenta_dos);
    printf("%s %d \n","Cantidad de 3: ",cuenta_tres);
    printf("%s %d \n","Cantidad de 4: ",cuenta_cuatro);
    printf("%s %d \n","Cantidad de 5: ",cuenta_cinco);
    printf("%s %d \n","Cantidad de 6: ",cuenta_seis);
    printf("%s %d \n","Cantidad de 7: ",cuenta_siete);
    printf("%s %d \n","Cantidad de 8: ",cuenta_ocho);
    printf("%s %d \n","Cantidad de 9: ",cuenta_nueve);


    return 1;

}

