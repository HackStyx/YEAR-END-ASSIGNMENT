#include <stdio.h>

int main() {
    int size, i;
    int arr[50];

    // Input the size of the array
    printf("Input the size of array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Find the second largest element
    int largest = arr[0];
    int secondLargest = arr[0];

    for (i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Output the result
    printf("The Second largest element in the array is: %d\n", secondLargest);

    return 0;
}
