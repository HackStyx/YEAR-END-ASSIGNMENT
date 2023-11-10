#include <stdio.h>

// Function to calculate power a^b
long long int power(long long int a, long long int b) {
    long long int result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % 1000000007;
        }
        a = (a * a) % 1000000007;
        b /= 2;
    }
    return result;
}

// Function to encrypt the code
long long int encryptCode(long long int S, long long int N, long long int M) {
    long long int encryptedCode = power(power(S, N) % 10, M) % 1000000007;
    return encryptedCode;
}

int main() {
    long long int S, N, M;

    // Taking input for the code and key values
    printf("Enter the code (S): ");
    scanf("%lld", &S);

    printf("Enter the first key value (N): ");
    scanf("%lld", &N);

    printf("Enter the second key value (M): ");
    scanf("%lld", &M);

    // Displaying the encrypted code
    printf("Encrypted code: %lld\n", encryptCode(S, N, M));

    return 0;
}
