#include <stdio.h>

int main(){
    int A, B, C, qtdViagen;
    scanf("%d", &A); //menor
    scanf("%d", &B); //media
    scanf("%d", &C); //maior

    if((B == C) && (C == A)){
        qtdViagen = 3;
    }else if(((B != A) && (A < B) && (B < C)) || ((A+B) < C)){
        qtdViagen = 1;
    }else if((A+B) > C){
        qtdViagen = 2;
    }

    printf("%d", qtdViagen);
}