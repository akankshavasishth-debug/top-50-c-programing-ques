#include <stdio.h>
int main() {
    char s[100];
    int len = 0, i; 
    printf("Enter a word: ");
    scanf("%s", s);
    while (s[len] != '\0') {
        len++;
    }
    for (i = 0; i < len; i++) {
        rev[i] = s[len - 1 - i];
    }
    rev[len] = '\0';
    printf("Reverse word %s\n", rev);
    return 0;
}