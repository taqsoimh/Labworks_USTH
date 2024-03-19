#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool checkprime(int n){
    bool check = true;
    for (int i = 2; i <= sqrt(n) ; i++)
    {
        if(n%i==0){
            check = false;
            break;
        }
    }
    return check;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("All prime from 1 to %d is: 1 ", n);
    for (int  i = 2; i <= n; i++)
    {
        if(checkprime(i)) printf("%d ", i);
    }
    
}