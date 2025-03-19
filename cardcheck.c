#include <stdio.h>
#include <string.h>

int isValidCreditCard(char cardNumber[]) {
    int length = strlen(cardNumber);
    int sum = 0;
    int doubleDigit = 0;

    for (int i = length - 1; i >= 0; i--) {
        int digit = cardNumber[i] - '0';
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }

    return (sum % 10 == 0);
}

int main() {
    char cardNumber[20];

    printf("Enter the credit card number: ");
    scanf("%19s", cardNumber);

    if (isValidCreditCard(cardNumber)) {
        printf("The credit card number is valid.\n");
    } else {
        printf("The credit card number is invalid.\n");
    }

    return 0;
}