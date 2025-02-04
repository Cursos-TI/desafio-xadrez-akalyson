#include <stdio.h>

int main(){
    //criacao das variaveis
    int bispo, torre, rainha;
    //movimentacao do bispo
    printf("--------------------\n");
    for(bispo = 1; bispo <= 5; bispo++){
        printf("Bispo, cima, direita \n");
    }
    //movimentacao da torre
    printf("--------------------\n");
    for(torre = 1; torre <= 5; torre++){
        printf("Torre, direita\n");
    }
    //movimentacao da rainha
    printf("--------------------\n");
    for(rainha = 1; rainha <= 8; rainha++){
        printf("Rainha, esquerda\n");
    }
    printf("--------------------\n");

    return 0;
}