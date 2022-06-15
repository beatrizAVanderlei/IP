#include <stdio.h>

int main()
{
    int c1, q1, c2, q2;
    float v1, v2;

    scanf ("%d %d %f", &c1, &q1, &v1);
    scanf ("%d %d %f", &c2, &q2, &v2);

    printf ("VALOR A PAGAR: R$ %0.2f\n", (q1*v1)+(q2*v2));
    
    return 0;
}

