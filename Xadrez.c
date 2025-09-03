#include <stdio.h>


//função de recursividade
    void movimentos(int inicio, int final, char movimentos[]){
            while (inicio <= final)
            {
             printf("%s \n", movimentos);
             inicio++;
            }
            
            
    }
    void movimentosBispo(int vertical, int horizontal){
        for (int i = vertical + 1, j = horizontal + 1;
         i <= 5 && j <= 5;
         i++, j++){
            printf("Cima, Direita\n");
         } 
        
        
    }

int main(){

    //declaração de variáveis
    int torre = 1;
    char movimentoTorre[] = "Torre foi para direita";
    int quantidadeMovimentosTorre =5;
    int verticalBispo = 0;
    int horizontalBispo = 0;
    int rainha = 1;
    char movimentoRainha[] = "A rainha se moveu para a esquerda";
    int quantidadeMovimentosRainha = 8;

    
    

    printf("-----------------------------\n");
    printf("BEM-VINDO AO JOGO DE XADREZ\n");

    //movimento torre
    printf("----------------------------\n");
    printf("Movimentação Torre\n");
    printf("-----------------------------\n");
    movimentos(torre, quantidadeMovimentosTorre, movimentoTorre );

    //movimento bispo
    printf("----------------------------\n");
    printf("Movimentação Bispo\n");
    printf("-----------------------------\n");
    movimentosBispo(verticalBispo, horizontalBispo);
    
    //movimento rainha
    printf("----------------------------\n");
    printf("Movimentação Rainha\n");
    printf("-----------------------------\n");
    movimentos(rainha, quantidadeMovimentosRainha, movimentoRainha);

    // //movimento cavalo
    printf("----------------------------\n");
    printf("Movimentação Cavalo\n");
    printf("-----------------------------\n");
    for (int vertical = 1, horizontal = 0; vertical <= 2, horizontal <= 1; vertical++, horizontal++)
    {
        while (vertical <= 2)
        {
            printf("Cima\n");
            break;
        }
        if (vertical >= 2)
        {
         printf("Direita\n");
        }
        
            
    
        
    }
    
    
    
    return 0;
}