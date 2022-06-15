#include <stdio.h>


int main(){
    int T, V; //T = tempo e V = velocidade
    float L; //L = quant de litros necessaria

    scanf ("%d %d", &T, &V);

    L = (V*T)/12.0;

    printf ("%0.3f\n", L);
    
    return 0;
}


