#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {

int opcao, regras;
int numeroSecreto, palpite;

printf("Menu Principal\n");
printf("1. Iniciar jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);


switch (opcao)
{
    case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    printf("Digite um número de 0 a 9\n");
    scanf("%d", &palpite);
    printf("número secreto %d\n", numeroSecreto);
    
    if (numeroSecreto == palpite)
    {
        printf("Você acertou!\n");
    } else {
      printf("Você errou!\n");  
    }
    break;

    case 2:
    printf("Explicação das regras\n");
    printf("Digite a opção relacionada as regras do jogo!\n");
    scanf("%d", &regras);
    switch (regras)

    {
    case 1:
    printf("Regra 1");
        break;
    case 2:
    printf("Regra 2");
        break;

    case 3:
    printf("Saindo do jogo\n");
    break;

    default:
    printf("Opção inválida!\n");
    break;
    
}
}



return 0; 
}


   









