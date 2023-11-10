#include <stdio.h>
#include <string.h>

int findWordFrequency(char *sentence, char *word) {
    int frequency = 0;
    char *foundWord;

    while ((foundWord = strstr(sentence, word)) != NULL) {
        frequency++;
        sentence = foundWord + 1;
    }

    return frequency;
}

int main() {
    char inputSentence[200];
    char wordToFind[] = "the";

    // Input a sentence
    printf("Enter a sentence: ");
    gets(inputSentence);

    // Convert the sentence and word to lowercase for case-insensitive comparison
    strlwr(inputSentence);
    strlwr(wordToFind);

    // Find and output the frequency of the word "the"
    int frequency = findWordFrequency(inputSentence, wordToFind);
    printf("Frequency of the word 'the': %d\n", frequency);

    return 0;
}
