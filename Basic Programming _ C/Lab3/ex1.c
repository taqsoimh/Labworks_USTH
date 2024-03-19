#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("All divisors of %d is: ", n);
    for (int  i = 1; i <= n; i++)
    {
        if(n%i==0){
            printf("%d ", i);
        }
    }
    
}