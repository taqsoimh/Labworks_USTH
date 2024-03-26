#include <stdio.h>
int main(){
    int n, max, min;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(arr[0] > arr[1]){
        max = arr[0];
        min = arr[1];
    }else{
        max = arr[1];
        min = arr[0];
    }


    for (int i = 2; i < n; i++)
    {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    
    }
    
    printf("Max = %d and Min = %d", max, min);
    
}