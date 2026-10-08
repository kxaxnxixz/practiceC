#include <stdio.h>

int main() {

    int temp;
    printf("Enter Temperature: ");
    scanf("%d", &temp);

    if (temp < 15)
        printf("Category: Cold\n");
    else if (temp <= 24)
        printf("Category: Mild\n");
    else if (temp <= 34)
        printf("Category: Warm\n");
    else
        printf("Category: Hot\n");

}