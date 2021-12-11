#include <stdio.h>
#include <malloc.h>

int main(){
    int a[4] = {1000, 1001, 1002, 1003};
    int *aa = a, i;
    for (i=0; i<4; i++){
        printf("%d %d", i+1, *aa++);
        printf("\n");
    }
    printf("\n");
    //int b[4] = {1000, 1001, 1002, 1003};
    int *bb = (int *)malloc(4*sizeof(int)); // создаю дин пам размера 4 инт memory allocation
    bb[0] = 1000; bb[1] = 1001; bb[2] = 1002; bb[3] = 1003;
    //int *bb = b, j;
    int j = 0;
    for (j = 0; j<4; j++){
        printf("%d ", *bb++);
        printf("\n");
    }
    free(bb-=4); // освобождаю дин память - тк это требует метод маллок
}