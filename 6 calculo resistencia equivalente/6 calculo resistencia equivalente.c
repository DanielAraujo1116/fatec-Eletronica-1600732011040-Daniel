/*
Programa: 6 calculo da resistência equivalente
Descr.: Este código tem como função realizar o calculo da resistência equivalente de um circuito onde as resistências estão em paralelo
Autor: Daniel Araujo
*/
#include <stdio.h>

int main(void) {
  float e_R1, e_R2, s_Req;
  //mensagem para o usuário inserir o valor de R1
  printf("Digite o valor da resistência 1:\n");
  //comando de leitura para o valor de R1
  scanf("%f", &e_R1);
  //mensagem ao usuário para inserior o valor de R2
  printf("Digite o valor da resistência 2:\n");
  //comando de leitura para o valor de R2
  scanf("%f", &e_R2);
  //formula para o calculo da resistência equivalente
  s_Req = (e_R1 * e_R2) / (e_R1 + e_R2);
  //mensagem ao usuário com o valor da resistência equivalente 
  printf("O valor da resistência equivalente é igual a: %.2f\n", s_Req);
  return 0;
}