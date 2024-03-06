#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.3f", 3*a - b*b*b - 2*sqrt(c));
}