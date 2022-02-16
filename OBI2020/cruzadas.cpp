#include <stdio.h>

int len(char w[]){
    int cont = 0, i = 0;
    while(true){
        if(w[i] == NULL) break;
        cont++;
        i++;
    }
    return cont;
}

int main(){
    char pHori[1000], pVert[1000];
    int iHori = -1, iVert = -1, sHori = 0, sVert = 0;

    scanf("%s", &pHori);
    scanf("%s", &pVert);

    sHori = len(pHori) - 1;
    sVert = len(pVert) - 1;

    for(int i = sHori; i >= 0; i--){
        for(int j = sVert; j >= 0; j--){
            if(pHori[i] == pVert[j]){
                iHori = i + 1;
                iVert = j + 1;
                break;
            }
        }
        if(iHori != -1 && iVert != -1) break;
    }

    printf("%d %d", iHori, iVert);
}