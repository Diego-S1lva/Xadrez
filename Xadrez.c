#include <stdio.h>

int main(){

    //declaração de variáveis
    int bispo = 1;
    int rainha = 1;
    int cavalo = 0;

    printf("-----------------------------\n");
    printf("BEM-VINDO AO JOGO DE XADREZ\n");

    //movimento torre
    printf("----------------------------\n");
    printf("Movimentação Torre\n");
    printf("-----------------------------\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Torre foi para a direita\n");
    }

    //movimento bispo
    printf("----------------------------\n");
    printf("Movimentação Bispo\n");
    printf("-----------------------------\n");
    while (bispo <= 5)
    {
        printf("Bispo foi para Cima, Direita\n");
        bispo++;
    }
    
    //movimento rainha
    printf("----------------------------\n");
    printf("Movimentação Rainha\n");
    printf("-----------------------------\n");
    do
    {
        printf("A rainha se moveu para a esquerda\n");
        rainha++;
    } while (rainha <= 8);

    //movimento cavalo
    printf("----------------------------\n");
    printf("Movimentação Cavalo\n");
    printf("-----------------------------\n");
    while (cavalo < 1)
    {
        cavalo++;
        for (int i = 1; i <= 2; i++)
        {
            printf("Cavalo se moveu para baixo\n");
        }
        
        printf("Cavalo se moveu para a esquerda\n");
    }
    
    
    return 0;
}