#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("BEFORE: %d - %d\n", num1, num2);
    swap(&num1, &num2);
    printf("AFTER: %d - %d\n", num1, num2);


}