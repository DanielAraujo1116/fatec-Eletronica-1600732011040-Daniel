/*
Programa: verificação 1 entre dois numeros qual o maior
Descr.: Este código tem como objetivo verificar qual dos dois numeros inseridos tem o maior valor
Autor: Daniel Araujo

OBS: O código foi construido para receber tanto numeros inteiros quanto numeros reais, ou seja, numeros que possuem ponto flutuante (reais) com precisao simples de apenas duas casas depois da virgula
*/
#include <stdio.h>

int main(void) {
  float e_num1, e_num2;
  printf("Digite o primeiro número:\t");
  scanf("%f", &e_num1);
  printf("Digite o segundo número:\t");
  scanf("%f", &e_num2);

  if(e_num1>e_num2){
    printf("Resposta: %.2f é o maior número entre os dois\n", e_num1);
  } else {
    printf("Resposta: %.2f é o maior número entre os dois\n", e_num2);
  }
  return 0;
}