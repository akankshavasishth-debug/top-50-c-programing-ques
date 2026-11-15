#include <stdio.h>
int main() {
    int n, numb, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    numb = n;
    while (numb > 0) {
        digit = numb % 10;
        sum = sum + digit * digit * digit;
        numb = numb / 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);
        return 0;
}
   