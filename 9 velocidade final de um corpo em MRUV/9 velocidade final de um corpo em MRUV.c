/*
Programa: 9 calculo da Velocidade Final de um corpo em MRUV
Descr.: Este código tem como fução calcular a Velocidade Final de um corpo em MRUV
Autor: Daniel Araujo

OBS: Todas as grandezas utilizadas estão de acordo com Sistema Internacional de Unidades (SI)
- Posições: são dadas em metros (m)
- Velocidade: é dada em metro por segundo (m/s)
- Tempo: é dado em segundos (s)
*/
#include <stdio.h>

int main(void) {
  int e_VelIn, e_Acel, e_Temp, s_VelFin;
  //mensagem para o usuário inserir o valor da Velocidade Final
  printf("Digite o valor da Velocidade Inicial do corpo(m/s):\n");
  //comando de leitura para o valor da Velocidade Final
  scanf("%d", &e_VelIn);
  //mensagem para o usuário inserir o valor da Aceleração do corpo
  printf("Digite o valor da Aceleração do corpo(m/s²):\n");
  //comando de leitura para o valor da Aceleração 
  scanf("%d", &e_Acel);
  //mensagem para o usuário inserir o valor do tempo
  printf("Digite o valor do instante em tempo(s):\n");
  //comando de leitura para o valor do Tempo
  scanf("%d", &e_Temp);
  //formula para calcular a Vlocidade Final
  s_VelFin = e_VelIn + e_Acel * e_Temp;
  //mensagem com o valor da Velocidade Final do corpo
  printf("A Velocidade Final do corpo é de: %dm/s\n", s_VelFin);
  return 0;
}