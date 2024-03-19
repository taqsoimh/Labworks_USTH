#include <stdio.h>
int main(){
    float n;
    float sum = 0;
    scanf("%f", &n);
    printf("the sum of a series : 1 + 1/2 + 1/3 +...+1/%d is: ", n);
    for (int  i = 1; i <= n; i++)
    {
        sum+= (((float)1)/i);
    }
    printf("%f", sum);
}