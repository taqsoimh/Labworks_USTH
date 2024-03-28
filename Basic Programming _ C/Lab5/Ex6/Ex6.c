#include <stdio.h>
#include <string.h>
#define MAX 100000

int main(){
    char str[MAX];
    scanf("%s", str);
    int len = strlen(str); //find the length of the string (excluding null element)
    for (int i = len-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}