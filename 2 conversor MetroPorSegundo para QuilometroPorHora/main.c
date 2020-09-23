/*
Programa: 2 conversor MetroPorSegundo para QuilometroPorHora
Descr.: Conversor de m/s para km/h
Autor: Daniel Araujo
*/

#include <stdio.h>

int main(void) {
  int e_MetroPorSegundo, s_QuilometroPorHora;
  //mensagem ao usuário para entrar com o valor em m/s
  printf("Digite o valor em m/s:\n");
  //comando de leitura do valor
  scanf("%d", &e_MetroPorSegundo);
  //formula pra o calculo de m/s para km/h
  s_QuilometroPorHora = e_MetroPorSegundo * 3.6;
  //mensagem com o valor em km/h
  printf("O valor em quilometro por hora é de: %d km/h\n", s_QuilometroPorHora); 
  return 0;
}