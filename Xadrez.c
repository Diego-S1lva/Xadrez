#include <stdio.h>

int main(){

    //declaração de variáveis
    int bispo = 1;
    int rainha = 1;

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
        printf("A rainha de moveu para a esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
}