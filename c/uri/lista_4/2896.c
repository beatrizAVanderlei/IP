#include <stdio.h>

int main() {
	int i, t, n, k, divisao, modulo;

    scanf ("%d", &t);

    for (i = 0; i < t; i++){
        scanf("%d %d", &n, &k);
        divisao = n/k;
        modulo = n%k;
        n = divisao + modulo;

        printf ("%d\n", n);
    }

	return 0;
}
