#include <stdio.h>


int main(){
    float N1, N2, N3, M; 
    int t, n;

    scanf ("%d", &n);
    
    for (t=1; t<=n; t++){

        scanf ("%f %f %f", &N1, &N2, &N3);
        M = ((N1*2.0) + (N2*3.0) + (N3*5.0))/10.0;

        printf ("%0.1f\n", M);
    }

    
    return 0;
}
