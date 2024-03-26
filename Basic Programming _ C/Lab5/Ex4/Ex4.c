#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of all the array elements is: %d", sum);


}