#include <stdio.h>

int main() {
    int size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int nextGreater[size];

    // Input the elements of the array
    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize nextGreater array with -1
    for (i = 0; i < size; i++) {
        nextGreater[i] = -1;
    }

    // Find next greater elements
    for (i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                nextGreater[i] = arr[j];
                break;
            }
        }
    }

    // Output the results
    printf("The given array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNext Bigger Elements are:\n");
    for (i = 0; i < size; i++) {
        printf("Next bigger element of %d in the array is: %d\n", arr[i], nextGreater[i]);
    }

    printf("Next Bigger Elements Array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", nextGreater[i]);
    }

    return 0;
}
