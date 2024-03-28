#include <stdio.h>
#include <math.h>
#include "func_ex5.h"
int N;
int main(){
    scanf("%d", &N);
    float A[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
    printf("The sum of all the matrix A's elements is: %.3f \n", sum(A));
    printf("The transposed matrix of A is \n");
    print_trans(A);
    printf("Determint of the given matrix is: %.2f \n", det(A, N));
    printf("The inversed matrix of A is: \n");
    print_invert(A, N);
}
