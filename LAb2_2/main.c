#include <stdio.h>
#include <math.h>
#define  PI 3.14159265
int main(){
    int x, y, z1, z2;
    double val = PI/180;
    scanf("lf lf", &x, &y); // запрос не значения переменной, а ее адреса в памяти // лонг флоат

    z1 = pow(cos(x), 4) + pow(sin(y), 2) + (1/4) * (pow(sin(2*x), 2)) - 1;
    z2 = sin(y + x) * sin(y - x);
    printf("%d %d", z1, z2);
}