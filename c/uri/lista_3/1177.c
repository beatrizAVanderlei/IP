#include <stdio.h>

int main(){
    int x[1000], i, y, z;

    scanf ("%d", &y);

    for (i = 0, z = 0; i < 1000; i++){
    
        printf ("N[%d] = %d\n", i, z);
        z++;

        if (y == z){

            z = 0;
        }

    }
        

    return 0;

}
