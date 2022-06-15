#include <stdio.h>

int main(){
    int x, par[5], impar[5], i = 0, j = 0, a, b;


    for (a = 0; a < 15; a++){
        scanf("%d", &x);

        if (x % 2 == 0){
            par[i] = x;
            i++;

            if (i == 5){
                for (b = 0; b < i; b++){
                    printf ("par[%d] = %d\n", b, par[b]);
                }
            i = 0;
            }


        } else {
            impar[j] = x;
            j++;

            if (j == 5){
                for (b = 0; b < j; b++){
                    printf ("impar[%d] = %d\n", b, impar[b]);
                }
            j = 0;

            }
        }
    }

    for (b = 0; b < j; b++){
                    printf ("impar[%d] = %d\n", b, impar[b]);
    }

    for (b = 0; b < i; b++){
                    printf ("par[%d] = %d\n", b, par[b]);
    }

    return 0;
}
