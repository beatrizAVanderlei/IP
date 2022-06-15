#include <stdio.h>


int main(){
    int N, d; // N = numero d = divisores
    
    scanf ("%d", &N);

    for (d=1; d<=N ; d++){
        if (N%d == 0){
            printf ("%d\n", d);
        }
    }
    
    return 0;
}
