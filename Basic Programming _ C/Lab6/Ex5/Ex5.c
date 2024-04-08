#include <stdio.h>
#include <stdlib.h>
int main(){
    // Declare p as a pointer to int
    int *p;
    //

    // Declare p as a pointer to a pointer to int 
    int **p;
    //

    // Declare p as an array of 10 pointers to int
    // method 1:
    int *p[10];
    //

    // method 2:
    int **p;
    p = (int **)malloc(10 * sizeof(int *));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    free(p);
    //
}