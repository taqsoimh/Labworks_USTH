#include <stdio.h>
#include <string.h>
#define MAX 100000
void remove_char(char *str, char ch) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main(){
    char chr;
    char str[MAX];
    scanf("%s", str);
    scanf(" %c", &chr);
    remove_char(str, chr);
    printf("After delete character %c, the string become: %s", chr, str);
}