#include <stdio.h>
#include <string.h>
#define MAX 100000

int main(){
    int count = 0;
    char str[MAX];
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            printf("The character 'a' is found at position: %d\n", i+1);
            count++;
        }
    }
    printf("Total number of 'a' is: %d", count);
}