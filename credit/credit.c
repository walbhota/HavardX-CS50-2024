#include <cs50.h>
#include <stdio.h>

int main(void) {
    // Prompt user for credit card number
    long long card_number = get_long_long("Number: ");

    // Check for invalid input (non-numeric, negative, or too short)
    if (card_number < 0 || card_number % 10 != 0) {
        printf("INVALID\n");
        return 1;
    }

    // Calculate length of card number
    int digits = 0;
    long long tmp = card_number;
    while (tmp > 0) {
        digits++;
        tmp /= 10;
    }

    // Validate card based on length and starting digits
    if (digits == 15 && (card_number / 100000000000000 == 34 || card_number / 100000000000000 == 37)) {
        printf("AMEX\n");
    } else if (digits == 16 && (card_number / 100000000000000 >= 51 && card_number / 100000000000000 <= 55)) {
        printf("MASTERCARD\n");
    } else if ((digits == 13 || digits == 16) && card_number / 100000000000000 == 4) {
        printf("VISA\n");
    } else {
        printf("INVALID\n");
        return 1;
    }

    // Apply Luhn's algorithm to check validity
    int sum = 0;
    tmp = card_number;
    while (tmp > 0) {
        int digit = tmp % 10;
        if (tmp / 10 % 2 == 0) {
            digit *= 2;
        }
        sum += digit % 10 + digit / 10;
        tmp /= 100;
    }

    if (sum % 10 == 0) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
        return 1;
    }

    return 0;
}
