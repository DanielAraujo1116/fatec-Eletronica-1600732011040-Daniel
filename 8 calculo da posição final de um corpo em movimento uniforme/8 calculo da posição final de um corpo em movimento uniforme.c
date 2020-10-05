/*
Programa: 8 calculo da posição final de um corpo em movimento uniforme
Desc.: Este código tem como função calcular a posição final em um certo tempo t, de um corpo em movimento uniforme
Autor: Daniel Araujo

OBS: Todas as grandezas utilizadas estão de acordo com Sistema Internacional de Unidades (SI)
- Posições: são dadas em metros (m)
- Velocidade: é dada em metro por segundo (m/s)
- Tempo: é dado em segundos (s) 
*/
#include <stdio.h>

int main(void) {
  int e_PosIn, e_Vel, e_Temp, s_PosFin;
  //mensagem ao usuário para inserir o valor da Posição Inicial do corpo
  printf("Digite o valor da Posição Inicial (m) do corpo:\n");
  //comando de leitura para o valor da Posição Inicial
  scanf("%d", &e_PosIn);
  //mensagem ao usuário para inserir o valor da Velocidade
  printf("Digite o valor da Velocidade (m/s) do corpo:\n");
  //comando de leitura para o valor da Velocidade
  scanf("%d", &e_Vel);
  //mensagem opara o usuário inserir o valor do Tempo
  printf("Digite o valor do instante em tempo (s) desejado:\n");
  //comando de leitura para o valor de Tempo
  scanf("%d", &e_Temp);
  //formula pra calcular a Posição Final do corpo
  s_PosFin = e_PosIn + e_Vel * e_Temp;
  //mensagem ao usuário com o valor da Posição Final do corpo no instante desejado
  printf("A posição final do corpo no instante desejado é no ponto: %dm\n", s_PosFin);
  return 0;
}