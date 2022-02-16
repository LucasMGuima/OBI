#include <stdio.h>

int main(){
    int a, s, d, dia = 0, altAtual = 0;
    scanf("%d", &a);
    scanf("%d", &s);
    scanf("%d", &d);

    while(true){
        dia += 1;
        altAtual += s;
        if(altAtual >= a) break;
        altAtual -= d;
    }

    printf("%d", dia);
}