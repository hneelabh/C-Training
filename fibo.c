#include <stdio.h>
#include <string.h>

void generateFibonacciWords(int order, char result[]) {
    if (order == 0) {
        strcpy(result, "A");
    } else if (order == 1) {
        strcpy(result, "B");
    } else {
        char prev1[100], prev2[100];
        generateFibonacciWords(order - 1, prev1);
        generateFibonacciWords(order - 2, prev2);
        strcpy(result, prev1);
        strcat(result, prev2);
    }
}

int main() {
    char result[100];
    int digits;
    printf("Enter the number of digits of the last number : ");
    scanf("%d", &digits);
    for (int i = 0; i <= digits; i++) {
        generateFibonacciWords(i, result);
        printf("f(%d) = %s\n", i, result);
    }
    return 0;
}