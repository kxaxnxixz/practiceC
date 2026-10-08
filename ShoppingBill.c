#include <stdio.h>

int main() {

    int price, quantity;
    printf("Enter Price: ");
    scanf("%d", &price);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    int total = price * quantity;
    int change = 500 - total;
    float average = (float)total / quantity;

    printf("Total cost: %d\n", total);
    printf("Change: %d\n", change);
    printf("Average cost: %.2f\n", average);

}