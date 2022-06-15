#include <stdio.h>

int main(){
    int pulo, qnt, cnt = 0, i, dif;
    scanf ("%d %d", &pulo, &qnt);
    int canos[qnt];

    for (i = 0; i < qnt; i++){
        scanf ("%d", &canos[i]);
    }

    for (i = 1; i < qnt; i++){
        if (canos[i] > canos[i-1]){
            dif = canos[i] - canos[i-1];
        }
        else{
            dif = canos[i-1] - canos[i];
        }
        if (dif <= pulo){
            cnt++;
        }
    }    

    if (cnt == qnt-1){
        printf ("YOU WIN\n");
    }

    else {
        printf ("GAME OVER\n");
    }

    return 0;
}
