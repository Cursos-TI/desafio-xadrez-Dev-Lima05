#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    /*Bispo: 5 casas na diagonal superior direita
    Torre: 5 casas para a direita
    Rainha: 8 casas para a esquerda*/

    int MOV_BISPO = 5, MOV_TORRE = 5, MOV_RAINHA = 8; // Constantes com número de jogadas de cada peça
    int i = 1; //contador bispo

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // DO-WHILE
    printf("** Movimentação Bispo **\n\n");
    do{
        printf("%d - Superior Direita ↗️\n",i);
        i++;
    }while(i<=MOV_BISPO);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // FOR
    printf("\n\n** Movimentação Torre **\n\n");
    for(int i = 1; i<=MOV_TORRE; i++){
        printf("%d - Direita➡️\n",i);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // WHILE
    printf("\n\n** Movimentação Rainha **\n\n");
    i = 1;
    while (i<=MOV_RAINHA){
        printf("%d - Esquerda⬅️\n",i);
        i++;
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     printf("\n\n** Movimentação Cavalo **\n\n");
    int MOV_CAVALO; 

    for(MOV_CAVALO=1; MOV_CAVALO>=1; MOV_CAVALO--){ // executado uma só vez
        i = 1; // incialização para controlar os movimentos para BAIXO
        while(i<=2){
            printf("Baixo⬇️\n");
            i++;
         }
        // executa depois do WHILE
        printf("Esquerda⬅️");
        }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
