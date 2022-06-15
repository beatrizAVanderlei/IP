#include <stdio.h>

int main(){
    double m[12][12], x = 0.0;
    char O[2];
    int i, j;

    scanf ("%s", O);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf ("%lf", &m[i][j]);
        }
    }

    for (i = 1; i < 12; i++){
        for (j = 11; j > 11 - i; j--){
            x = x + m[i][j];
        }
    }

    if (O[0] == 'M'){
        x = x/66.0;
        printf ("%0.1lf\n", x);
    }

    else if (O[0] == 'S'){
        x = x;
        printf ("%0.1lf\n", x);
    }

    return 0;
}
