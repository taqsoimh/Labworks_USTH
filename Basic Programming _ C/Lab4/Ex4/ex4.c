#include<stdio.h>
long long factorial(int n){
    if(n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
void solve(){
    int n;
    scanf("%d", &n);
    printf("%d! = %lld", n, factorial(n));
}