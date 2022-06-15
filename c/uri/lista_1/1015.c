#include <math.h>
#include <stdio.h>


int main(){
    float x1, y1;
    float x2, y2;
    float X, Y, dis;

    scanf ("%f %f", &x1, &y1);
    scanf ("%f %f", &x2, &y2);

    X = (x2-x1) * (x2-x1);
    Y = (y2-y1) * (y2-y1);

    dis = X+Y;
    dis = sqrtf(dis);

    printf ("%0.4f\n", dis);
    
    return 0;
}


