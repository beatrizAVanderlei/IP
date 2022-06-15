#include <stdio.h>

int main(){
    int x[10], i, v;

    scanf ("%d", &v);

    for (i = 0; i < 10; i++){
        x[i] = v;
    
        printf ("N[%d] = %d\n", i, v);
        
        v = v*2;

    }
        
    return 0;

}
