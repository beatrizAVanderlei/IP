#include <stdio.h>

int main()
{
    int A, B;
    float salario, SALARY;
    
    scanf ("%d", &A);
    printf ("NUMBER = %d\n", A);

    scanf ("%d", &B);
    scanf ("%f", &salario);
    
    SALARY = B*salario;
    
    printf ("SALARY = U$ %0.2f\n", SALARY);
    
    return 0;
}

