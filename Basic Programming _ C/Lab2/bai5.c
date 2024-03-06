#include <stdio.h>
int main(){
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    float y = (a*f - c*d)/(a*e - b*d);
    float x = (c - b*y)/a;
    printf("x = %f and y = %f", x, y); 
}
