#include <stdio.h>

int main(){
    int s, t, f, chegada;

    scanf ("%d %d %d", &s, &t, &f);
    chegada = s+t+f;

    if (chegada < 0){
        chegada = chegada + 24;
    }

    printf ("%d\n", chegada%24);

    return 0;
}
