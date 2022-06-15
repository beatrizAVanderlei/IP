#include <stdio.h>

int main(){
    int i;
    double n[100], x;

    scanf ("%lf", &x);
    n[0] = x;

    for (i = 0; i < 100; i++){
        printf ("N[%d] = %0.4lf\n", i, n[i]);
        
        x = x/2.0;
        n[i+1] = x;

    }

    return 0;

}
