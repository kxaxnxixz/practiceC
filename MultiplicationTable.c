#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Invalid number\n");
    }
    else {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
}