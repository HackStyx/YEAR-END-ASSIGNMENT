#include <stdio.h>

void printNonRepeatingChars(char *str) {
    int count[256] = {0}; // Assuming ASCII characters
    
    // Count the occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Print non-repeating characters
    printf("Non-repeating characters: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
}

int main() {
    char inputString[100]; // Assuming a maximum input length of 100 characters

    printf("Enter a string: ");
    scanf("%s", inputString);

    printNonRepeatingChars(inputString);

    return 0;
}
