 #include <stdio.h>

int main(){
    int X, Y;

    scanf("%d %d", &X, &Y);

    if(X==0 || Y==0){
            return 0;
    }

    while(X!=0 || Y!=0){

        if(X>0 && Y>0){
            printf("primeiro\n");
        }

        if(X<0 && Y>0){
            printf("segundo\n");
        }

        if(X<0 && Y<0){
            printf("terceiro\n");
        }

        if(X>0 && Y<0){
            printf("quarto\n");
        }

        scanf("%d %d", &X, &Y);

        if(X==0 || Y==0){
            return 0;
        }

    }

    return 0;
}
