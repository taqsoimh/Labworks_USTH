#include <stdio.h>

int main(){
    int a, b, sum;
    int *ptr1, *ptr2;
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d", a, b, sum);


}