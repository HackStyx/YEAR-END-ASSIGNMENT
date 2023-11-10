#include <stdio.h>

void convertHours(int hours, int *minutes, int *seconds) {
    *minutes = hours * 60;
    *seconds = hours * 3600;
}

int main() {
    int hours, minutes, seconds;

    // Input hours
    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    // Convert and output the result
    convertHours(hours, &minutes, &seconds);
    printf("%d hours is equal to %d minutes or %d seconds.\n", hours, minutes, seconds);

    return 0;
}