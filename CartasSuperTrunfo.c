#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  //Declaração das variaveis:
  char estado1[20],estado2[20];
  char codigo1[50],codigo2[50],cidade1[20],cidade2[20];
  int populacao1,populacao2,Nturistico1,Nturistico2;
  float area1,area2,PIB1,PIB2;
  
  printf("Bem vindo ao Cadastro do Super Trunfo de Cidades\n");
  // Cadastrando as informaçoes da primeira carta
  printf("Cadastras Carta 1\n");
  printf("Digite o Estado da Carta:\n");
  scanf("%s", estado1);
  printf("Digite o codigo da Carta:\n");
  scanf("%s", codigo1);
  printf("Digite o nome da Cidade:\n");
  scanf("%s",cidade1);
  printf("Digite o numero da população:\n");
  scanf("%d",&populacao1);
  printf("Digite a Area territorial:\n");
  scanf("%f",&area1);
  printf("digite o PIB:\n");
  scanf("%f",&PIB1);
  printf("Digite o numero de Pontos Turisticos:\n");
  scanf("%d",&Nturistico1);

   // Cadastrando as informaçoes segunda carta
   printf("Cadastras Carta 2\n");
   printf("Digite o Estado da Carta:\n");
   scanf("%s", estado2);
   printf("Digite o codigo da Carta:\n");
   scanf("%s", codigo2);
   printf("Digite o nome da Cidade:\n");
   scanf("%s",cidade2);
   printf("Digite o numero da população:\n");
   scanf("%d",&populacao2);
   printf("Digite a Area territorial:\n");
   scanf("%f",&area2);
   printf("digite o PIB:\n");
   scanf("%f",&PIB2);
   printf("Digite o numero de Pontos Turisticos:\n");
   scanf("%d",&Nturistico2);

   //Exibindo as informaçoes das Cartas
   printf("Informaçoes das cartas Castradas:\n");
   printf("Carta1:\n");
   printf("Estado: %s\n",estado1);
   printf("Codigo de Carta: %s\n",codigo1);
   printf("Populacao: %d\n",populacao1);
   printf("Area: %.2f\n",area1);
   printf("PIB:%.2f\n",PIB1);
   printf("P.Turistico: %d\n\n",Nturistico1);

   printf("Carta2:\n");
   printf("Estado: %s\n",estado2);
   printf("Codigo de Carta: %s\n",codigo2);
   printf("Populacao: %d\n",populacao2);
   printf("Area: %.2f\n",area2);
   printf("PIB:%.2f\n",PIB2);
   printf("P.Turistico: %d\n\n",Nturistico2);

    return 0;
}
