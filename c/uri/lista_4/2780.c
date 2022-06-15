#include <stdio.h>

int main(){
    int D;

    scanf ("%d", &D);

    if (D <= 800){
        printf ("1\n");
    }

    else if (800 < D && D <= 1400){
        printf ("2\n");
    }

    else if (1400 < D && D <= 2000){
        printf ("3\n");
    }

    return 0;
}
