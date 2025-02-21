#include <stdio.h>

int main(){
    //criacao das variaveis
    int bispo = 0, torre = 0, rainha = 0;
    //movimentacao do bispo
    printf("--------------------\n");
    for(bispo = 1; bispo <= 5; bispo++){
        printf("Bispo, cima, direita \n");
    }
    //movimentacao da torre
    printf("--------------------\n");
    do{
        printf("Torre, direita\n");
        torre++;
    }while(torre < 5);
    //movimentacao da rainha
    printf("--------------------\n");
    while(rainha < 8){
        printf("Rainha, esquerda\n");
        rainha++;
    }
    printf("--------------------\n");

    return 0;
}