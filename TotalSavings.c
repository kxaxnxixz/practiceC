#include <stdio.h>

int main() {
    int days, amount;
    int savings = 0;

    printf("Enter how many days: ");
    scanf("%d", &days);

    if (days < 1 || days > 10) {
        printf("Invalid input\n");
    }
    else {
        for (int i = 1; i <= days; i++) {
            printf("Enter amount saved based on day: ");
            scanf("%d", &amount);

            if (amount < 0 || amount > 1000) {
                printf("Invalid input\n");
                return 0;
            }

            savings = savings + amount;
        }

        float avg = (float)savings / days;

        printf("Total savings: %d\n", savings);
        printf("Average daily savings: %.2f\n", avg);
    }    
}