#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Nível Mestre - Funções Recursivas e Loops Aninhados
void Bispo(int casas){

    if(casas > 0){
        Bispo(casas - 1); // controla a quantidade de casas

    for (int i = 1; i <= 1; i++) {       // movimento vertical (CIMA)
        for (int j = 1; j <= 1; j++) {   // movimento horizontal (DIREITA)
            printf("Direita ➡️\n");
        }
        printf("Cima ⬆️\n\n");
    }
    }
}

void Torre(int casas){
      if(casas > 0){
        printf(" Direita➡️\n");
        Torre(casas - 1); // recursão repete o movimento
    }
}

void Rainha(int casas){
    if(casas > 0){
        printf(" Esquerda⬅️\n");
        Rainha(casas - 1); // recursão repete o movimento
    }
}


int main() {
    printf("** Movimentação Bispo **\n\n");
    Bispo(5); // 5 movimentos

    printf("\n\n** Movimentação Torre **\n\n");
    Torre(5); // 5 movimentos

    printf("\n\n** Movimentação Rainha **\n\n");
    Rainha(8); // 8 movimentos

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.
    printf("\n\n** Movimentação Cavalo **\n\n");
    int cima, direita;

    // Cavalo 2 para cima + 1 para a direita
    for (cima = 1, direita = 0; cima <= 2 || direita < 1; ) {
        if (cima <= 2) {
            printf("Cima ⬆️\n", cima);
            cima++;
            continue; // garante os 2 passos para cima antes de ir para direita
        }

        if (direita < 1) {
            printf("Direita ➡️\n");
            direita++;
        }
    }
    return 0;
}
