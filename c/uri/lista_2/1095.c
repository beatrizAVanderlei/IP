#include <stdio.h>

int main() {
    int I, J;
    I=1;
    J=60;
  
    for(I=1,J=60; J<=60; I=I+3,J=J-5){

        printf("I=%d J=%d\n", I,J);

        if(J==0)
            break;
    }

    return 0;
}

