#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char content[100];

    // Create a file
    printf("Enter the name of the file to create: ");
    scanf("%s", filename);

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error creating the file.\n");
        return 1;
    }

    printf("File created successfully.\n");

    // Write to file
    printf("Enter content to write to the file:\n");
    getchar(); // Consume the newline character left by previous input
    gets(content);

    fprintf(file, "%s", content);

    printf("Content written to the file.\n");

    // Close the file
    fclose(file);

    // Open an existing file
    printf("Enter the name of the file to open: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read from file
    printf("Content of the file:\n");

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    printf("\n");

    // Close the file
    fclose(file);

    return 0;
}
