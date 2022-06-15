#include <stdio.h>

int main(){
    int i, j, min, x;
    scanf ("%d", &j);
    int n[j];

    for (i = 0; i < j; i++){
        scanf ("%d", &n[i]);
        
        min = n[0];    
    }

    for (i = 0; i < j; i++){
        if (min > n[i]){

            min = n[i];
            x = i;
        }
    }

    printf ("Menor valor: %d\nPosicao: %d\n", min, x);

    return 0;
}
