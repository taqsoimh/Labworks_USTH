#include<stdio.h>
long long normal(int x, int n){
    long long out = 1;
    for (int i = 0; i < n; i++)
    {
        out*=x;
    }
    return out;
}
long long recursive(int x, int n){
    if(n==0){
        return 1;
    }else{
        return x*recursive(x, n-1);
    }
}
void solve(){
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d ^ %d = %lld (normal)\n", x, n, normal(x, n));
    printf("%d ^ %d = %lld (recursive)\n", x, n, recursive(x, n));
}