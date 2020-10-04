/*
Programa: 3 calculo da area de um quadrado
Descr.: Este código tem como função calcular a area de um quadrado
Autor: Daniel Araujo 
*/ 
#include <stdio.h>

int main(void) {
  int e_lado, s_area;
  //mensagem ao usuário para entrar com o valor de um dos lados do quadrado
  printf("Digite o valor do lado de um quadrado\n");
  //comando de leitura do valor
  scanf("%d", &e_lado);
  //formula para o calculo da area do quadrado
  s_area = e_lado * e_lado;
  //mensagem ao usuário com o valor da area do quadrado
  printf("A area do seu quadrado é igual a: %d\n", s_area);
  return 0;
}