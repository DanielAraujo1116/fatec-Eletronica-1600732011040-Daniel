/*
Programa: 1 conversor de Polegada para Milímetro
Descr.: Conversor de polegada para milímetro
Autor: Daniel Araujo
*/

#include <stdio.h>

int main(void) {
  int e_Polegada, s_Milimetro;
  //mensagem ao usuário para entrar com o valor em Polegada
  printf("Entre com o valor em Polegada:\n");
  //comando de leitura do valor
  scanf("%d", &e_Polegada);
  //formula para conversão de Polegada para Milímetro
  s_Milimetro = e_Polegada * 25.4;
  //mensagem com o valor em Milímetro
  printf("O valor em Milimetro: %d mm\n", s_Milimetro);
  return 0;
 
}