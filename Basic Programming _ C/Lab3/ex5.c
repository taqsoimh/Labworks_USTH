#include <stdio.h>
int main(){
    int n, f1, f2, temp;
    f1 = 0;
    f2 = 1;
    scanf("%d", &n);
    printf("The Fibonnacci series upto %d is: ", n);
    while(1)
    {
        printf("%d ", f1);
        if(f2>n) break;
        temp = f2;
        f2 = f1+f2;
        f1 = temp;
        
    }
    
}