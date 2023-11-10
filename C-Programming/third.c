#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to calculate the sum of the series
float sumOfSeries(int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (float)factorial(i) / i;
    }
    return sum;
}

int main() {
    int terms;

    // Taking input for the number of terms in the series
    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    // Displaying the sum of the series
    printf("Sum of the series: %.2f\n", sumOfSeries(terms));

    return 0;
}
