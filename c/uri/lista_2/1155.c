#include <stdio.h>

int main(){
    double X, I, S=0;

    for(X=1; X<=100; X++){
        I = 1/X;
        S = S+I;
    }

    printf("%.2lf\n",S);

    return 0;
}
