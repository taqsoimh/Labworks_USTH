#include <stdio.h>
void method_1(int n){ //USING MATH (OK)
    int sum_odd =0;
    int sum_even = 0;
    int sum = (n+1)*n/2;
    if(n%2==0){
        sum_odd = (sum - (n/2))/2;
        sum_even = sum - sum_odd;
    }else{
        sum_even = (sum - ((n+1)/2))/2;
        sum_odd = sum - sum_even;
    }
    printf("Sum of odd numbers from 1 to %d is: %d \n", n, sum_odd);
    printf("Sum of even numbers from 1 to %d is: %d \n", n, sum_even);
}

void method_2(int n){ //USING FOR LOOP (Accepted)
    int sum_odd =0;
    int sum_even = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            sum_even += i;
        }else{
            sum_odd +=i;
        }
    }
    printf("Sum of odd numbers from 1 to %d is: %d \n", n, sum_odd);
    printf("Sum of even numbers from 1 to %d is: %d \n", n, sum_even);
}

void method_3(int n){ //USING ARRAY (BAD)
    int sum_odd =0;
    int sum_even = 0;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]%2==0){
            sum_even += arr[i];
        }else{
            sum_odd += arr[i];
        }
    }
    printf("Sum of odd numbers from 1 to %d is: %d \n", n, sum_odd);
    printf("Sum of even numbers from 1 to %d is: %d \n", n, sum_even);

}

int main(){
    int n;
    scanf("%d", &n);
    // method_1(n);
    // method_2(n);
    // method_3(n);
}