/*
Programa: verificador 2 colocar três numeros em ordem crescente
Descr.: Este código tem como objetivo colocar três numeros aleatorios em ordem crescente
Autor: Daniel Araujo

OBS: considerando que não serão lidos valores iguais e que todos os valores utilizados serão numeros inteiros
*/
#include <stdio.h>

int main(void) {
  int e_num1, e_num2, e_num3;
  printf("Digite o primeiro numero:\n");
  scanf("%d", &e_num1);
  printf("Digite o segundo numero:\n");
  scanf("%d", &e_num2);
  printf("Digite o terceiro numero:\n");
  scanf("%d", &e_num3);

    if(e_num3 > e_num2 && e_num2 > e_num1)
      printf("A ordem dos numeros é: %d %d %d", e_num1, e_num2, e_num3);
    else
      if(e_num2 > e_num3 && e_num3 > e_num1)
      printf("A ordem dos numeros é: %d %d %d", e_num1, e_num3, e_num2);
    else
      if(e_num3 > e_num1 && e_num1 > e_num2)
      printf("A ordem dos numeros é: %d %d %d", e_num2, e_num1, e_num3);
    else
      if(e_num1 > e_num3 && e_num3 > e_num2)
      printf("A ordem dos numeros é: %d %d %d", e_num2, e_num3, e_num1);
    else
      if(e_num2 > e_num1 && e_num1 > e_num3)
      printf("A ordem dos numeros é: %d %d %d", e_num3, e_num1, e_num2);
    else
      if(e_num1 > e_num2 && e_num2 > e_num3)
      printf("A ordem dos numeros é: %d %d %d", e_num3, e_num2, e_num1);
  return 0;
}