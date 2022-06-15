#include <stdio.h>

int main() {
	int i, t, a = 0, b;
    scanf ("%d", &t);

    for (i = 1; i <= t; i++){
        scanf("%d", &b);
        if (b < a){
            printf ("%d\n", i);
            break;
        }
        a = b;
    }
    if(i == t+1){
        printf ("0\n");
    }

	return 0;
}
