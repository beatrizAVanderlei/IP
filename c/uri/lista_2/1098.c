#include <stdio.h>

int main(){
    float i, j, b;

    for(i = 0.0 ; i <= 2.2 ; i = i + 0.2){

        if(i == 0.0 || i == 1.0 || i > 1.9 ){

            for(b = 1.0; b <= 3.0; b++){
                printf("I=%.0lf J=%.0lf\n", i, i + b);
            }
        }

        else{

            for(j = 1.0 ; j <= 3.0 ; j++){
                printf("I=%.1lf J=%.1lf\n", i, i+j);
            }
        }
    }

    return 0;
}
