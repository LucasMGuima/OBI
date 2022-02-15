#include <stdio.h>

int main(){
    int posA, posB, posC;
    scanf("%d", &posA);
    scanf("%d", &posB);
    scanf("%d", &posC);

    int distBA = posB - posA;
    int distCB = posC - posB;

    if(distBA < distCB){
        printf("%d", 1);
    }else if(distBA > distCB){
        printf("%d", -1);
    }else if(distBA == distCB){
        printf("%d", 0);
    }
}