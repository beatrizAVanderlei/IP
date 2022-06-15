#include <stdio.h>

int main(){
    double I, S, R; // I=salario inicial, S=salario atual, R=reajuste
    int P;
    char p = '%';

    scanf ("%lf", &I);

    if (I >= 0 && I <= 400.00){
        S = I+(I*0.15);
        P = 15;
        R = S-I;
    }

    else if (I >= 400.01 && I <= 800.00){
        S = I+(I*0.12);
        P = 12;
        R = S-I;
    }

    else if (I >= 800.01 && I <= 1200.00){
        S = I+(I*0.1);
        P = 10;
        R = S-I;
    }

    else if (I >= 1200.01 && I <= 2000.00){
        S = I+(I*0.07);
        P = 7;
        R = S-I;
    }

    else if (I > 2000.00){
        S = I+(I*0.04);
        P = 4;
        R = S-I;
    }

    printf ("Novo salario: %0.2lf\n", S);
    printf ("Reajuste ganho: %0.2lf\n", R);
    printf ("Em percentual: %d %c\n", P, p);

    return 0;
}
