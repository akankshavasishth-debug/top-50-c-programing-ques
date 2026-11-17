#include <stdio.h>
int main()
{
    char str[1000];
    int i, vowel = 0, consonant = 0, words = 0;
    printf("enter a sentence: ");
    gets(str);
    for (i = 0; str[i] != '\0'; ++i) {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            ++vowel;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z')) {
            ++consonant;
        }
        else if (str[i] == ' ') {
            ++words;
        }
    }
    return 0;
}
