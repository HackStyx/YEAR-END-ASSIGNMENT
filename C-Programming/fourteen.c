#include <stdio.h>

struct Item {
    char itemName[50];
    float price;
    int quantity;
};

float calculateTotalAmount(struct Item items[], int itemCount) {
    float totalAmount = 0;

    for (int i = 0; i < itemCount; i++) {
        float amount = items[i].price * items[i].quantity;
        totalAmount += amount;
    }

    return totalAmount;
}

int main() {
    struct Item items[50];
    int itemCount;

    // Input the number of items
    printf("Enter the number of items (max 50): ");
    scanf("%d", &itemCount);

    // Input item details
    for (int i = 0; i < itemCount; i++) {
        printf("Enter details for item %d:\n", i + 1);
        printf("Item Name: ");
        scanf("%s", items[i].itemName);
        printf("Price: ");
        scanf("%f", &items[i].price);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
    }

    // Calculate and output the total amount
    float totalAmount = calculateTotalAmount(items, itemCount);
    printf("Total Paid Amount: $%.2f\n", totalAmount);

    return 0;
}
