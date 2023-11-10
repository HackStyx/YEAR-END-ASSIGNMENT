#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    // Input base and exponent
    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the power number: ");
    scanf("%d", &exponent);

    // Calculate and output the result
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
