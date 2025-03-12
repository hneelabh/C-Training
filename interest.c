#include <stdio.h>
#include "interest.h"

int main() {
    double principal = 1000.0;
    double rate = 5.0;
    double time = 2.0;

    printf("Simple Interest: %.2f\n", SIMPLE_INTEREST(principal, rate, time));
    printf("Amount: %.2f\n", AMOUNT(principal, rate, time));

    return 0;
}