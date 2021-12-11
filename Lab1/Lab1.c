#include <stdio.h>

int main() {
    int zeloe;
    char simvl;
    scanf("%d", &zeloe); // специальный формат функции - понимает, что на вход пойдет дес число
    scanf(" %c", &simvl); // при втором скан ф ставить пробел " " пробел - чар
    printf("%d %c", zeloe, simvl);
}
