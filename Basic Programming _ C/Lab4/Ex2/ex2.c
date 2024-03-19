#include <stdio.h>
#include "../Ex1/ex1.c"
int GCD4v(int a, int b, int c, int d){
    int gcd_a_b = GCD2v(a, b);
    int gcd_ab_c = GCD2v(gcd_a_b, c);
    return GCD2v(gcd_ab_c, d);
}

void solve_ex2(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("The greatest common divisor (GCD) of %d, %d, %d and %d is: %d", a, b, c, d, GCD4v(a, b, c, d));
}