#include <stdio.h>
int main(){
    int a, b;
    printf("Enter decimal number A\n");
    scanf("%d", &a);
    printf((a >= -56 && a <= 56) ? "A in range": "A out of range\n");
    printf("\nEnter decimal number B \n");
    scanf("%o", &b);
    printf("%d", (b & (1 << 8) ==0) ? 0:1);

}
