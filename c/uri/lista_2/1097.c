 #include <stdio.h>

int main() {
    int I, J;
    I = 1;
    J = 7;

    while (I<=9){

        printf("I=%d J=%d\n", I, J--);
        printf("I=%d J=%d\n", I, J--);
        printf("I=%d J=%d\n", I, J--);

        I = I+2;
        J = J+5;
    }

    return 0;
}
