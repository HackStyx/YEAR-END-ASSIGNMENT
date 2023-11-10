#include <stdio.h>

void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    while (*str != '\0') {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
                *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}

int main() {
    char inputString[100];
    int vowels = 0, consonants = 0;

    // Input a string
    printf("Enter a string: ");
    gets(inputString);

    countVowelsConsonants(inputString, &vowels, &consonants);

    // Output the result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
