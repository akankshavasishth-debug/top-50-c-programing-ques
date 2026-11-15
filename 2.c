#include <stdio.h>
int main() {
    int n, numb, digit, sum = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    numb = n;                 
    while (n > 0) {
        digit = n % 10;           
        sum = sum + digit;       
        rev = rev * 10 + digit;   
        n = n / 10;               
    }
    printf("Sum of digits = %d\n", sum);
    printf("Reverse = %d\n", rev);
    if (rev == numb)
        printf("Palindrome");
    else
        printf("Not  palindrome");
    return 0;
}
