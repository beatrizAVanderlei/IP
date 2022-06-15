#include <stdio.h>
#include <math.h>

int main(){
    long voltas, placas, pa, i;
    double p;

    scanf ("%ld %ld", &voltas, &placas);
    placas = voltas * placas;
    
    for(i = 1; i <= 9; i++) {
        p = i * placas / 10.0;
        pa = (long) p;
        if(p > pa)
            pa++;
        printf("%ld", pa);
        if(i<9)
            printf(" ");
    }
    
    printf("\n");

   return 0;
}
