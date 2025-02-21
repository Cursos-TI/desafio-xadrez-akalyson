#include <stdio.h>

int main(){
    //criacao das variaveis
    int bispo = 0, torre = 0, rainha = 0, cavalo = 0;
    //movimentacao do bispo
    printf("--------------------\n");
    printf("Movimentaçao do Bispo\n");
    for(bispo = 1; bispo <= 5; bispo++){
        printf("Cima, Direita \n");
    }
    //movimentacao da torre
    printf("--------------------\n");
    printf("Movimentaçao da Torre\n");
    do{
        printf("Direita\n");
        torre++;
    }while(torre < 5);
    //movimentacao da rainha
    printf("--------------------\n");
    printf("Movimentaçao da Rainha\n");
    while(rainha < 8){
        printf("Esquerda\n");
        rainha++;
    }
    //movimentacao do cavalo
    printf("--------------------\n");
    printf("Movimentaçao do Cavalo\n");
    while(cavalo < 1){
        for(int i = 1; i <= 2; i++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        cavalo++;
    }
    printf("--------------------\n");
    return 0;
}