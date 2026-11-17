
#include <stdio.h>
struct Date
{
    int day, month, year;
};
struct Address
{
    char city[50];
    char state[50];
};
struct Employee
{
    int id;
    char name[50];
    struct Date joining;
    struct Address address;
};
int main()
{
    struct Employee e[50], temp;
    int n, i, j;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter employee ID: ");
        scanf("%d", &e[i].id);
        printf("Enter employee name: ");
        scanf(" %[^\n]", e[i].name);
        printf("Enter joining date (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].joining.day,
              &e[i].joining.month,
              &e[i].joining.year);
        printf("Enter city: ");
        scanf(" %[^\n]", e[i].address.city);

        printf("Enter state: ");
        scanf(" %[^\n]", e[i].address.state);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(e[j].joining.year > e[j+1].joining.year ||
              (e[j].joining.year == e[j+1].joining.year &&
               e[j].joining.month > e[j+1].joining.month) ||
              (e[j].joining.year == e[j+1].joining.year &&
               e[j].joining.month == e[j+1].joining.month &&
               e[j].joining.day > e[j+1].joining.day))
            {
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;
            }
        }
    }
    printf("\nEmployees sorted by joining date:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nJoining Date: %d-%d-%d",
               e[i].joining.day,
               e[i].joining.month,
               e[i].joining.year);
        printf("\nCity: %s", e[i].address.city);
        printf("\nState: %s\n", e[i].address.state);
    }
    return 0;
}
