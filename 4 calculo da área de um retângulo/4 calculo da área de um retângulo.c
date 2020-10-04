/*
Programa: 4 calculo da área de um retângulo 
Descr.: Este código tem como função realizar o cálculo da área de um retângulo 
Autor: Daniel Araujo 
*/
#include <stdio.h>

int main(void) {
  int e_base, e_altura, s_area;
  //mensagem ao usuário para inserir o valor da base
  printf("Digite o valor da base do seu retângulo:\n");
  //comando de leitura do valor da base 
  scanf("%d", &e_base);
  //mensagem ao usuário para inserir o valor da altura
  printf("Digite o valor da altura do seu retângulo:\n");
  //comando de leitura do valor da altura
  scanf("%d", &e_altura);
  //formula do calculo
  s_area = e_base * e_altura;
  //mensagem ao usuário com o valor da área do retângulo
  printf("O valor da área do seu retângulo é igual a: %d\n", s_area);
  return 0;
}