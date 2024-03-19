#include <stdio.h>
int GCD2v(int a, int b){
    int out;
    for (int i = 1; i <= a && i<= b; i++){
        if(a%i==0 && b%i ==0) out = i;
    }
    return out;
}

void solve_ex1(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The greatest common divisor (GCD) of %d and %d is: %d", a, b, GCD2v(a, b));
}