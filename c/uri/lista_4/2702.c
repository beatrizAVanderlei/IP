#include <stdio.h>

int main(){
    int C, B, M, passageiros = 0;
    int Cp, Bp, Mp;

    scanf ("%d %d %d", &C, &B, &M);
    scanf ("%d %d %d", &Cp, &Bp, &Mp);

    if (C < Cp) {
        passageiros = passageiros + (Cp - C);
    }

    if (B < Bp){
        passageiros = passageiros + (Bp - B);
    }  
   
    if (M < Mp){
        passageiros = passageiros + (Mp - M);
    }
    
    printf ("%d\n", passageiros);

    return 0;
}
