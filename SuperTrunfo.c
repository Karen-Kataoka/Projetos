#include <stdio.h>

int main(){

     // Desafio Super Trunfo - Países
     // Nível Nonato - Cadastro das cartas
     // Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


     // Observação: Este programa cadastra exatamente 2 cartas com dados de cidades.
     //             Para ampliar o número de cartas, replique os blocos de variáveis,
     //             entrada e saída, seguindo o mesmo padrão adotado aqui.

      // Área para definição das variáveis para armazenar as propriedades das cidades
      // =============================================================================
      // Cada carta possui: estado (char único), código (string de 3 chars + '\0'),
      // nome da cidade (string), população (inteiro), área (float),
      // PIB (float em bilhões) e número de pontos turísticos (inteiro).
      // ==============================================================================

     /*-----Carta 1 -----*/
    char estado1;                 //Letra de A a H representando o estado
    char codigo1[4];             // Código da carta, ex: "A01" (3 caracteres + terminador nulo)
    char nomeCidade1[50];         //Nome da cidade, até 49 caracteres + terminador nulo
    int populacao1;               //População total da cidade (número inteiro)
    float area1;                  //Área territorial em km²
    float pib1;                   //PIB em Bilhões de reais
    int pontosTuristicos1;        //Quantidade de pontos turísticos da cidade

    /*-----Carta 2 -----*/
    char estado2;             //Letra de A a H representando o estado
    char codigo2[4];         // Código da carta, ex: "B02" (3 caracteres + terminador nulo)
    char nomeCidade2[50];     //Nome da cidade, até 49 caracteres + terminador nulo
    int populacao2;           //População total da cidade (número inteiro)
    float area2;              //Área territorial em km²
    float pib2;               //PIB em Bilhões de reais
    int pontosTuristicos2;    //Quantidade de pontos turísticos da cidade

       // ============================================================
                  // BLOCO DE ENTRADA DE DADOS — CARTA 1

        // O usuário digita as informações pelo terminal.
        // Atenção aos formatos do scanf:
      //   %c  → lê um único caractere
      //   %3s → lê string de até 3 chars (sem espaços)
      //   " %49[^\n]" → lê string com espaços, ignorando o '\n' residual no buffer
       //   %d  → lê inteiro
       //   %f  → lê número de ponto flutuante
      // ============================================================
     
      //Área para entrada de dados

     /*=====Entrada de Dados da Carta 1 =====*/

    printf("\n-----Cadastro da Carta 1-----\n");

    printf("Estado (A-H):");
    scanf(" %c", &estado1);

    printf("Codigo (ex:A01):");
    scanf("%3s", codigo1);

    printf("Nome da cidade:");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Populacao:");
    scanf("%d", &populacao1);

    printf("Area em km2:");
    scanf("%f", &area1);

    printf("PIB em bilhoes de reais:");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos1);

    // ============================================================
       // BLOCO DE ENTRADA DE DADOS — CARTA 2
        // Idêntico ao bloco da Carta 1.
        // Atenção: o scanf de estado2 usa " %c" (com espaço antes)
        // para descartar o '\n' que ficou no buffer após a leitura anterior.
      // ============================================================

       /*=====Entrada de Dados da Carta 2 =====*/


    printf("\n-----Cadastro da Carta 2-----\n");

    printf("Estado (A-H):");
    scanf(" %c", &estado2);

    printf("Codigo (ex:B02):");
    scanf("%3s", codigo2);

    printf("Nome da cidade:");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Populacao:");
    scanf("%d", &populacao2);

    printf("Area em km2:");
    scanf("%f", &area2);

    printf("PIB em bilhoes de reais:");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos2);

     
    // Área para exibição dos dados da cidade

     // ============================================================
         // BLOCO DE SAÍDA DE DADOS
         // Exibe no terminal as informações cadastradas para cada carta.
         // Formatações utilizadas:
       //   %c  → imprime caractere
       //   %s  → imprime string
       //   %d  → imprime inteiro
       //   %.2f → imprime float com 2 casas decimais
     // ============================================================

     /*=====Saida de Dados da Carta 1=====*/

    printf("\n\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);

   
     /*=====Saida de Dados da Carta 2=====*/

    printf("\n\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    // ============================================================
    //Retorno 0 indica que o programa encerrou sem erros.
    // ============================================================

    return 0;
}