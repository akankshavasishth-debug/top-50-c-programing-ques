#include <stdio.h>
enum Traffic
{
    RED,
    YELLOW,
    GREEN
};
int main()
{
    enum Traffic signal;
    int choice;
    printf("Traffic Signals:\n");
    printf("0. RED\n");
    printf("1. YELLOW\n");
    printf("2. GREEN\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    signal = choice;
    printf("\nSignal value = %d\n", signal);
    switch(signal)
    {
        case RED:
            printf("RED: STOP\n");
            break;
        case YELLOW:
            printf("YELLOW: WAIT\n");
            break;
        case GREEN:
            printf("GREEN: GO\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    printf("\nInteger values of enum:\n");
    printf("RED = %d\n", RED);
    printf("YELLOW = %d\n", YELLOW);
    printf("GREEN = %d\n", GREEN);

    return 0;
}

