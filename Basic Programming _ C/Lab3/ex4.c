#include <stdio.h>
int main(){
    int n;
    long long product = 1;
    scanf("%d", &n);
    printf("The product of digits of the %d is: ", n);
    while (n!=0)
    {
        product *= n%10;
        n/=10;
    }
    
    printf("%lld", product);
}