#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    // Open the current source file
    fp = fopen(__FILE__, "r");

    // Check if the file is opened successfully
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and print each character from the file
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    // Close the file
    fclose(fp);

    return 0;
}
