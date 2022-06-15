#include <stdio.h>

int main(){
    double a=0.0, M[12][12];
    char T[2];
    int L,x,y;

    scanf("%d", &L);
    scanf("%s", T);

    for(x = 0; x < 12; x++){
        for(y = 0 ; y < 12; y++){
            scanf("%lf", &M[x][y]);

            if(x == L)
                a+=M[x][y];
        }
    }

    if(T[0] == 'S'){
        printf("\n%.1lf\n",a);
    }

    else if(T[0] == 'M'){
        a=a/12.0;

        printf("%.1lf\n",a);
    }

    return 0;
}
