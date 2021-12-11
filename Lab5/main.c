#include <stdio.h>
int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    printf("%d %d %d\n", arr[3], arr[4], arr[5]);
    printf("%d\n", arr[6]);
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{1, 2}, {3, 4}};
    int matrix12[2][2];
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            matrix12[i][j] = 0;
            for(int k=0; k<2; k++) {
                matrix12[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for(int i=0; i<2; i++) {
        printf("%d %d \n", matrix12[i][0], matrix12[i][1]);

    }
}