/*
Programa: 6 conversor de Celsius para Fahrenheit
Descr.: Este código tem como função converter a temperatura que esta em Celsius para Fahrenheit
Autor: Daniel Araujo 
*/
#include <stdio.h>

int main(void) {
  float e_TempC, s_TempF;
  //mensagem ao usuário para inserir o valor da temperatura em Celsius
  printf("Digite o valor da temperatura em Celsius: \n");
  //comando de leitura do valor da temperatura em Celsius
  scanf("%f", &e_TempC);
  //formula para a conversão da temperatura 
  s_TempF = (e_TempC * 9/5) + 32;
  //mensagem ao usuário com o valor da temperatura em Fahrenheit
  printf("O valor da temperatura em Fahrenheit é de: %.1f°F\n", s_TempF);
  return 0;
}