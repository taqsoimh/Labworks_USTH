#include <stdio.h>
#include <math.h>
#include "func_ex5.h"
int N;
int main(){
    scanf("%d", &N);
    float arr[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }
    print_trans(arr);
    // printf("Sum = %.3f", sum(arr));
    // printf("Determint of the given matrix is: %.2f", det(arr, N));
    // print_invert(arr , N);
}