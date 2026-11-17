#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
int main() {
    struct Student s[3];
    int i, top = 0;
    for (i = 0; i < 3; i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[top].marks)
            top = i;                      
    }
    printf("\nRoll  Name        Marks\n");
    for (i = 0; i < 3; i++)
        printf("%-5d %-10s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    printf("\nTopper: %s with %.2f marks", s[top].name, s[top].marks);
    return 0;
}