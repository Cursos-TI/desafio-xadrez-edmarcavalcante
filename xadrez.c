#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (i=1;i<=5;i++) {
        printf("Bispo Move-se Direita \n");
        printf("Bispo Move-se para Cima \n");
    }
    printf("Ao final, o Bispo moveu-se %d casas para Direita e %d casas para cima. \n", i-1,i-1);
    printf("############################################## \n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    int j = 1;

    while (j<=5) {
        
        printf("Torre Move-se à direita! \n");
        j++;
    }
    printf("############################################## \n");
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int k = 1;
    
    do
    {
        printf("Rainha move-se à esquerda! \n");
        k++;
    } while (k<=8);

    printf("############################################## \n");
    
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int l = 1;
    int m;

    while (l)
    {
        for (m = 1; m<=2; m++) {
            printf("Cavalo move para baixo. \n");
        };
    printf("Cavalo move-se para esquerda. \n");
    l--;
    }
    printf("############################################## \n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
