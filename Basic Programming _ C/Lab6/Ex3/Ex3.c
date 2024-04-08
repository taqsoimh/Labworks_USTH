#include <stdio.h>

int main(){
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = a;
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d is: %d\n", i, *(ptr+i));
    }
}