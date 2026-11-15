
#include <stdio.h>

int main()
{
    int a[10], n, i, j, count;
    int b[10] = {0};
    printf("Enter no  of elements: ");
    scanf("%d", &n);
    printf("Enter elements \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("frequency\n");
    for(i = 0; i < n; i++)
    {
        if(b[i] == 1)
            continue;

        count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                b[j] = 1;
            }
        }
        printf("%d occurs %d times\n", a[i], count);

        if(count == 1)
            printf("%d occur 1 time\n", a[i]);
        else
            printf("%d occurs %d times\n", a[i], count);
    }
    return 0;
}
