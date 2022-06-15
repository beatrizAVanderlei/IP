#include <stdio.h>

int main(){
    int senha;
    senha= 1;

    while(senha != 2002){

        scanf("%d", &senha);

        if(senha == 2002){
            printf("Acesso Permitido\n" );

            return 0;
        }else{
            printf("Senha Invalida\n" );
        }
    }
    return 0;
}
