#include <stdio.h>

int main() {
   int I = 0, A = 0, G = 0, D = 0;
   
   while (I != 4) {
         
        scanf("%d", &I);

        if (I == 1) {
            A = A+1;
                
        }else if (I == 2) {
            G = G+1;
                
        }else if (I == 3) {
            D = D+1;

        }
    }

        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", A);
        printf("Gasolina: %d\n", G);
        printf("Diesel: %d\n", D);

    return 0;
}
