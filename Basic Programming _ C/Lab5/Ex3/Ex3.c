#include <stdio.h>
void swap(int* a, int* b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void bubble_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) swap(&arr[j], &arr[j+1]);
        }
        
    }
}

void insertion_sort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int key = arr[i];
        while (key<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
}

void selection_sort(int arr[], int n){
    int index_min;
    for (int  i = 0; i < n-1; i++)
    {
        index_min = i;
        for (int j = i+1; j < n; j++)//j=i->2
        {
            if(arr[index_min] > arr[j]) index_min = j;    
        }
        swap(&arr[index_min], &arr[i]);      
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //bubble_sort(arr, n);
    // insertion_sort(arr, n);
    // selection_sort(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
}