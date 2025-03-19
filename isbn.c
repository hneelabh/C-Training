#include <stdio.h>
#include <string.h>

int isValidISBN(char isbn[]) {
    int sum = 0;
    int length = strlen(isbn);

    if (length != 10) {
        return 0;
    }

    for (int i = 0; i < 10; i++) {
        int digit;
        if (isbn[i] == 'X') {
            digit = 10;
        } else if (isbn[i] >= '0' && isbn[i] <= '9') {
            digit = isbn[i] - '0';
        } else {
            return 0;
        }
        sum += digit * (10 - i);
    }

    return (sum % 11 == 0);
}

int main() {
    char isbn[11];
    printf("Enter the 10-digit ISBN number: ");
    scanf("%10s", isbn);

    if (isValidISBN(isbn)) {
        printf("The ISBN number is correct.\n");
    } else {
        printf("The ISBN number is incorrect.\n");
    }

    return 0;
}