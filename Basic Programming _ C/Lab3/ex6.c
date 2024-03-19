#include <stdio.h>
int main(){
    int n;
    long long out = 1;
    scanf("%d", &n);
    printf("A factorial of %d is: ", n);
    for (int i = n; i >= 1 ; i--)
    {
        out*=i;
    }
    printf("%lld", out);

    
}