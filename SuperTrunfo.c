#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

     /// ================================================================
    // Desafio Super Trunfo - Países
    // Nível Aventureiro - Menu Interativo + Comparação por Atributo
    // ================================================================
     

     /*-----Carta 1 -----*/
    char estado1;                                                //Letra de A a H representando o estado
    char codigo1[4];                                             //Código da carta, ex: "A01" (3 caracteres + terminador nulo)
    char nomeCidade1[50];                                        //Nome da cidade, até 49 caracteres + terminador nulo
    unsigned long long int populacao1;                                              //População total da cidade (número inteiro)
    float area1;                                                 //Área territorial em km²
    float pib1;                                                  //PIB em Bilhões de reais
    int pontosTuristicos1;                                       //Quantidade de pontos turísticos da cidade
    float densidadePopulacional1;                                //Quantas pessoas vivem, em média, em cada quilômetro quadrado daquele país/região.
    float pibPerCapita1;                                         //É uma média de quanto “valor econômico” cada pessoa produziria se a riqueza fosse dividida igualmente.
    float superpoder1; 
    float inversoDensidade1;
                                          
    /*-----Carta 2 -----*/
    char estado2;                                                 //Letra de A a H representando o estado
    char codigo2[4];                                             // Código da carta, ex: "B02" (3 caracteres + terminador nulo)
    char nomeCidade2[50];                                         //Nome da cidade, até 49 caracteres + terminador nulo
    unsigned long long int populacao2;                                               //População total da cidade (número inteiro)
    float area2;                                                  //Área territorial em km²
    float pib2;                                                   //PIB em Bilhões de reais
    int pontosTuristicos2;                                        //Quantidade de pontos turísticos da cidade
    float densidadePopulacional2;                                 //Quantas pessoas vivem, em média, em cada quilômetro quadrado daquele país/região.
    float pibPerCapita2;                                           //É uma média de quanto “valor econômico” cada pessoa produziria se a riqueza fosse dividida igualmente.
    float superpoder2;
    float inversoDensidade2;

    
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
    scanf("%llu", &populacao1);

    printf("Area em km2:");
    scanf("%f", &area1);

    printf("PIB em bilhoes de reais:");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos1);

  
    //===== Cálculo da densidade populacional=====//
   

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1          = (pib1 * 1000000000) / populacao1;  // como o PIB está em bilhões, multiplica por 1.000.000.000 
    inversoDensidade1      = 1.0f / densidadePopulacional1;     //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional).   
    superpoder1            = (float)populacao1
                           + area1
                           + pib1
                           + (float)pontosTuristicos1
                           + pibPerCapita1
                           + inversoDensidade1;

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
    scanf("%llu", &populacao2);

    printf("Area em km2:");
    scanf("%f", &area2);

    printf("PIB em bilhoes de reais:");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos2);


    //===== Cálculo da densidade populacional=====//
    
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2          = (pib2 * 1000000000) / populacao2;  // PIB (convertido para reais) dividido pela população como o PIB está em bilhões, multiplica por 1.000.000.000
    inversoDensidade2      = 1.0f / densidadePopulacional2;
    superpoder2            = (float)populacao2   //Super Poder = soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional).   
                           + area2
                           + pib2
                           + (float)pontosTuristicos2
                           + pibPerCapita2
                           + inversoDensidade2;
     

    // ================================================================
    //              EXIBIÇÃO DAS CARTAS CADASTRADAS
    // ================================================================

    printf("\n\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nomeCidade1);
    printf("Populacao: %llu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %f\n" , superpoder1);

    printf("\n\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nomeCidade2);
    printf("Populacao: %llu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %f\n" , superpoder2);

    // ================================================================
    //              MENU INTERATIVO — ESCOLHA DO ATRIBUTO
    // ================================================================

    int opcao;

    printf("\n\n========================================\n");
    printf("       SUPER TRUNFO - COMPARACAO\n");
    printf("========================================\n");
    printf("Escolha o atributo para comparar:\n\n");
    printf("  1 - Populacao\n");
    printf("  2 - Area\n");
    printf("  3 - PIB\n");
    printf("  4 - Pontos Turisticos\n");
    printf("  5 - Densidade Populacional\n");
    printf("  6 - PIB per Capita\n");
    printf("  7 - Super Poder\n");
    
    while (getchar() != '\n');

    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);

    // ================================================================
    //              LÓGICA DE COMPARAÇÃO COM SWITCH + IF-ELSE
    // ================================================================

    printf("\n========================================\n");
    printf("           RESULTADO DA RODADA\n");
    printf("========================================\n");
    printf("Carta 1: %s  vs  Carta 2: %s\n\n", nomeCidade1, nomeCidade2);

    switch (opcao) {

        // ---------- 1. POPULAÇÃO ----------
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %llu hab\n", nomeCidade1, populacao1);
            printf("%s: %llu hab\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nVencedor: %s (Carta 1)!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("\nVencedor: %s (Carta 2)!\n", nomeCidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        // ---------- 2. ÁREA ----------
        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", nomeCidade1, area1);
            printf("%s: %.2f km2\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("\nVencedor: %s (Carta 1)!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("\nVencedor: %s (Carta 2)!\n", nomeCidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        // ---------- 3. PIB ----------
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhoes\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("\nVencedor: %s (Carta 1)!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("\nVencedor: %s (Carta 2)!\n", nomeCidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        // ---------- 4. PONTOS TURÍSTICOS ----------
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nVencedor: %s (Carta 1)!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nVencedor: %s (Carta 2)!\n", nomeCidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        // ---------- 5. DENSIDADE DEMOGRÁFICA (MENOR VENCE) ----------
        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("(Regra especial: MENOR valor vence)\n");
            printf("%s: %.2f hab/km2\n", nomeCidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km2\n", nomeCidade2, densidadePopulacional2);

            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("\nVencedor: %s (Carta 1)!\n", nomeCidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("\nVencedor: %s (Carta 2)!\n", nomeCidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        // ---------- 6. PIB PER CAPITA ----------
        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", nomeCidade1, pibPerCapita1);
            printf("%s: %.2f reais\n", nomeCidade2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2) {
                printf("\nVencedor: %s (Carta 1)!\n", nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("\nVencedor: %s (Carta 2)!\n", nomeCidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        // ---------- 7. SUPER PODER ----------
        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", nomeCidade1, superpoder1);
            printf("%s: %.2f\n", nomeCidade2, superpoder2);

            if (superpoder1 > superpoder2) {
                printf("\nVencedor: %s (Carta 1)!\n", nomeCidade1);
            } else if (superpoder2 > superpoder1) {
                printf("\nVencedor: %s (Carta 2)!\n", nomeCidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        // ---------- OPÇÃO INVÁLIDA ----------
        default:
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 7.\n");
            break;
    }

    printf("========================================\n");

    printf("\nPressione Enter para sair...");
    while (getchar() != '\n');
    getchar();  


    return 0;
   }
















    