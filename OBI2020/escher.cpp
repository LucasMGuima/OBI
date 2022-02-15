#include <stdio.h>

int main(){
    int qtdN, i;
    int num[20];
    bool escher = true;
    
    scanf("%d", &qtdN);
    for(i = 0; i < qtdN;i++){
        scanf("%d", &num[i]);
    }

    int n = qtdN-1;
    for(i = 0; i < qtdN/2; i++){
        if((num[i] + num[n]) != (num[i+1] + num[n-1])){
            escher = false;
            break;
        }
        n--;
    }

    if(escher){
        printf("S");
    }else{
        printf("N");
    }
}