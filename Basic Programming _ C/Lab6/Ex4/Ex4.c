#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int *ptr;
    printf("Enter the number of elements n: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++){
        scanf("%d", ptr + i);
    }

    printf("The elements of the dynamic array are:\n");

    for (i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }

    free(ptr);
}
