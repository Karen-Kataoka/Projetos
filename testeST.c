#include <stdio.h>

int main() {
   
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
/*-----Carta 1-----*/
char estado1;
char codigo1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

/*-----Carta 2-----*/
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

  
  // Área para entrada de dados

  printf("\n-----Cadastro da Carta 1-----\n");

  printf("Digite o Estado (A-H):");
  scanf(" %c", &estado1);

  printf("Digite o Codigo (ex:A01):");
  scanf("%3s", codigo1);

  printf("Digite o nome da Cidade:");
  scanf(" %49[^\n]", nomeCidade1);

  printf("Digite o numero da Populacao:");
  scanf("%d", &populacao1);

  printf("Digite a Area em km²:");
  scanf("%f", &area1);

  printf("Digite o PIB em bilhoes de reais:");
  scanf("%f", &pib1);

  printf("Digite o numero de Pontos Turisticos:");
  scanf("%d", &pontosTuristicos1);


  printf("\n-----Cadastro da Carta 2-----\n");

   printf("Digite o Estado (A-H):");
  scanf(" %c", &estado2);

  printf("Digite o Codigo (ex:B02):");
  scanf("%3s", codigo2);

  printf("Digite o nome da Cidade:");
  scanf(" %49[^\n]", nomeCidade2);

  printf("Digite o numero da Populacao:");
  scanf("%d", &populacao2);

  printf("Digite a Area em km²:");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhoes de reais:");
  scanf("%f", &pib2);

  printf("Digite o numero de Pontos Turisticos:");
  scanf("%d", &pontosTuristicos2);
  
  // Área para exibição dos dados da cidade

  /*=====Saida de Dados da Carta 1=====*/

  printf("\n\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f Km²", area1);
  printf("PIB %.2f bilhoes de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);


  /*=====Saida de Dados da Carta 2=====*/

  printf("\n\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f Km²", area2);
  printf("PIB %.2f bilhoes de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);

 return 0;

}
