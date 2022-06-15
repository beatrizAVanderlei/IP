#include <stdio.h>

int main(){
    int N[20], i, j, x;

    for (i = 0; i < 20; i++){
        scanf ("%d", &N[i]);
    }

    for (i = 0, j = 19; i < 10; i++, j--){
        x = N[i];
        N[i] = N[j];
        N[j] = x;
    }

    for (i = 0; i < 20; i++){

        printf ("N[%d] = %d\n", i, N[i]);
    
    }

    return 0;

}
