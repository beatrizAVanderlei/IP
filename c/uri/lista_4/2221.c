#include <stdio.h>

int main(){
    int j, i, bonus, ag, dg, ng, ad, dd, nd, guarte, dabriel;

    scanf ("%d", &j);

    for (i = 0; i < j; i++){
        scanf ("%d", &bonus);
        scanf ("%d %d %d", &ad, &dd, &nd); // dabriel
        scanf ("%d %d %d", &ag, &dg, &ng); // guarte

        dabriel = (ad+dd)/2;
        guarte = (ag+dg)/2;

        if (nd%2 == 0){
            dabriel = dabriel + bonus;
        }
        if (ng%2 == 0){
            guarte = guarte + bonus;
        }

        if (guarte > dabriel){
            printf ("Guarte\n");
        }

        if (guarte < dabriel){
            printf ("Dabriel\n");
        }

        if (guarte == dabriel){
            printf ("Empate\n");
        }

    } 

    return 0;
}
