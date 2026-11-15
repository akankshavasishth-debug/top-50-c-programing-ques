#include <stdio.h>
int main() {
    int A[10][10], T[10][10], r, c, i, j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &A[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
    printf("Transpose:\n");
            T[j][i] = A[i][j];            
    for (i = 0; i < c; i++) {             
        for (j = 0; j < r; j++)           
            printf("%d ", T[i][j]);
        printf("\n");
    }
    return 0;
}