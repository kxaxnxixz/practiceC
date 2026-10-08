#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if (base < 1 || base > 10 || exponent < 0 || exponent > 8) {
        printf("Invalid input\n");
    }
    else {
        for (int i = 1; i <= exponent; i++) {
            result = result * base;
        }

        printf("Result: %d\n", result);
    }

    return 0;    
}