#include <stdio.h>

int main() {
    float  N, T=0, M=0;
    int cont, totalnum;
    totalnum = 0;
  
    for (cont = 1; cont <= 6; cont++) {
        scanf("%f", &N);

        if (N > 0) {
            totalnum = totalnum + 1;
            T = T + N;
        }
    }

      M = T / totalnum;

     printf("%d valores positivos\n", totalnum);
     printf("%.1f\n", M);

    return 0;
}
