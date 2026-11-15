int main() {
    int A[10][10], B[10][10], C[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &A[i][j]);
    printf("Enter matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &B[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            C[i][j] = A[i][j] - B[i][j];
    printf("Difference:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;