#include <stdio.h>
int main()
{
    int n,numb,reverse=0,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    numb=n;
    while(n>0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(reverse==numb)
        printf(" no is Palindrome");
    else
        printf("Not a palindrome");
    return 0;
}