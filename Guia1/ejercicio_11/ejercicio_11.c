/*11) Escribir un programa que invierta los dígitos de un número positivo entero (sugerencia: usar
operadores módulo, %, y división, /, para obtener los dígitos de a uno por vez).*/

 #include<stdio.h>

int main(){

  int  n, resto;

  printf("Ingresa un numero: \n");
  scanf("%d", &n);

  while (n > 0){
    resto = n % 10;
    n = n / 10;
    printf("%d", resto);
  }
  printf("\n");

  return 0;
}