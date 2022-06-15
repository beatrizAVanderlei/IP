#include <stdio.h>
#include <string.h>

int main(){
   
    char entrada[51], saida[51];
    int chave, i, tamanho, t, n;

    scanf ("%d", &t);

    for(n = 0; n < t; n++){

        scanf("%s", entrada);
        scanf("%d", &chave);

        tamanho = strlen(entrada);

        for(i =0; i < tamanho; i++) {
            saida[i] =  (entrada[i] - chave);

            if(saida[i] < 'A'){
                saida[i] += 26; 
            }
        }

        saida[i] = '\0';

        printf("%s\n", saida); 
    }
    return 0;

}
