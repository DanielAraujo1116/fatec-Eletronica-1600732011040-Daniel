/*
Programa: Calculo da resistência 
Descr.: Este código tem como função realizar o calculo da resistência de um resistor simples em um circuito elétrico
Autor: Daniel Araujo 
*/
#include <stdio.h>

int main(void) {
  float e_tensao, e_corrente, s_resistencia;
  //mensagem ao usuário para inserir o valor da tensão
  printf("Digite o valor da tensão do circuito:\n");
  //comando de leitura para o valor de tensão
  scanf("%f", &e_tensao);
  //mensagem ao usuário para inserior o valor da corrente
  printf("Digite o valor da corrente do circuito:\n");
  //comando de leitura para o valor da corrente
  scanf("%f", &e_corrente);
  //formula para o calculo da resistência 
  s_resistencia = e_tensao / e_corrente;
  //mensagem ao usuário com o valor da resistência do circuito  
  printf("O valor da resistência do circuito é de: %.1f\n", s_resistencia);
  return 0;
}