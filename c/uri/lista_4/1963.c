#include <stdio.h>

int main(){
    double A, B, p;
    char c = '%';

    scanf ("%lf %lf", &A, &B);

    p = ((B - A)*100.00)/A;

    printf ("%0.2lf%c\n", p, c);

    return 0;
}
