#include <stdio.h>

int main() {
    int I, S = 0; //I = idade, S = soma, M = media
    double M = 0;

    while(1){
        
        scanf ("%d", &I);
        
        if (I<0){
            break;
        }

        else{
        S = S+I;
        M++;
        }
    }

    M = S/M;

    printf ("%0.2lf\n", M);

    return 0;
}
