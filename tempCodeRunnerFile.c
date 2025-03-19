#include <stdio.h>

void calculate_change(int cents) {
    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    int total_coins = quarters + dimes + nickels + pennies;

    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);
    printf("Total coins: %d\n", total_coins);
}

int main() {
    int change;
    char choice;

    do {
        printf("How much change is owed?\n");
        printf("Enter as a whole number (e.g., enter 41 for $0.41): ");
        
        if (scanf("%d", &change) != 1 || change < 0 || change > 99) {
            printf("Invalid input. Enter a number between 0 and 99.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        calculate_change(change);

        printf("Do you want to enter another amount? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');

    return 0;
}