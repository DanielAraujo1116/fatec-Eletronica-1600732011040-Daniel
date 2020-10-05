/*
Programa: 10 posição final de um corpo em MRUV
Desc.: Este código tem como função calcular a Posição Final de um corpo que esta em MRUV
Autor: Daniel Araujo

OBS: Todas as grandezas utilizadas estão de acordo com Sistema Internacional de Unidades (SI)
- Posições: são dadas em metros (m)
- Velocidade: é dada em metro por segundo (m/s)
- Tempo: é dado em segundos (s)
*/
#include <stdio.h>

int main(void) {
  int e_PosIn, e_VelIn, e_Acel, e_Temp, s_PosFin;
  //mensagem ao usuário para inserir o valor da Posição Inicial
  printf("Digite o valor da Posição Inicial do corpo(m):\n");

  //comando de leitura para o valor da Posição Inicial
  scanf("%d", &e_PosIn);

  //mensagem ao usuário para inserir o valor da Velocidade Inicial
  printf("Digite o valor da Velocidade Inicial do corpo(m/s):\n");

  //comando de leitura para o valor da Velocidade Inicial
  scanf("%d", &e_VelIn);

  //mensagem para o usuário inserir o valor da Aceleração
  printf("Digite o valor da Aceleração do corpo(m/s²):\n");

  //comando de leitura para o valor da Aceleração
  scanf("%d", &e_Acel);

  //mensagem paa o usuário inserir o valor do Tempo
  printf("Digite o valor do tempo(s):\n");

  //comando de leitura para o valor do Tempo
  scanf("%d", &e_Temp);

  //formula para calcular a Posição Final 
  s_PosFin = e_PosIn + e_VelIn * e_Temp +  e_Acel / 2 * e_Temp * e_Temp;

  //mensagem com o valor da Posição Final
  printf("A Posição Final do corpo é no ponto: %dm\n", s_PosFin);

  return 0;
}