#include <stdio.h>

int main(){
    float arr[3];
    float temp;
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
    printf("Max = %.3f && Min = %.3f", arr[2], arr[0]);
    

}