/*15) Se realizaron cuatro experimentos, cada uno de los cuales tiene seis resultados de ensayo. Los
resultados de cada experimento se muestran más abajo. Escribir un programa que use ciclos while
anidados para calcular y luego desplegar el promedio de los resultados del ensayo para cada
experimento.
Resultados del primer experimento: 23,2, 31, 16,9, 27, 28,6.
Resultados del segundo experimento: 34,8, 45,2, 27,9, 36,8, 33,4, 39,4.
Resultados del tercer experimento: 19,2, 16,8, 10,2, 20,9, 25,4, 18,6.
Resultados del cuarto experimento: 36,9, 39, 49,3, 45,1, 52,4, 21,7.*/

 #include<stdio.h>

int main(){

  size_t exp1[] = {23,2, 31, 16,9, 27, 28,6};
  size_t exp2[] = {34,8, 45,2, 27,9, 36,8, 33,4, 39,4};
  size_t exp3[] = {19,2, 16,8, 10,2, 20,9, 25,4, 18,6};
  size_t exp4[] = {36,9, 39, 49,3, 45,1, 52,4, 21,7};
  size_t i = 0;
  size_t j = 0;
  size_t k = 0;
  size_t l = 0;
  float total1 = 0;
  float total2 = 0;
  float total3 = 0;
  float total4 = 0;
  float promedio1 = 0;
  float promedio2 = 0;
  float promedio3 = 0;
  float promedio4 = 0;

  
  while(l < (sizeof(exp1) / sizeof(exp1[0])) ){
      total1 = total1 + exp1[l];
      l++;
        while(k < (sizeof(exp2) / sizeof(exp2[0])) ){
            total2 = total2 + exp2[k];
            k++;
              while(j < (sizeof(exp3) / sizeof(exp3[0])) ){
                total3 = total3 + exp3[j];
                j++;
                  while(i < (sizeof(exp4) / sizeof(exp4[0])) ){
                    total4 = total4 + exp4[i];
                    i++;
                }
        }
    }
  }
promedio1 = total1 /  (sizeof(exp1) / sizeof(exp1[0]));
printf("%.2f",promedio1);
    promedio2 = total2 /  (sizeof(exp2) / sizeof(exp2[0]));
    printf("%.2f",promedio2);
        promedio3 = total3/  (sizeof(exp3) / sizeof(exp3[0]));
        printf("%.2f",promedio3);
            promedio4 = total4 /  (sizeof(exp4) / sizeof(exp4[0]));
            printf("%.2f",promedio4);

  return 0;
}