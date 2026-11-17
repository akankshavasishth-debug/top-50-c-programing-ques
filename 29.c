#include <stdio.h>
int power(int x, int y) {
    if (y == 0) return 1;              
    return x * power(x, y - 1);
}
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);    
}
int main() {
    printf("2^5 = %d\n", power(2, 5)); 
    printf("fib(7) = %d\n", fib(7));   
    return 0;
}