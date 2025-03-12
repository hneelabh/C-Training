#include <stdio.h>
#include "areaperi.h"

int main() {
    double base = 5.0, height = 10.0;
    double side = 4.0;
    double radius = 3.0;
    double a = 3.0, b = 4.0, c = 5.0;

    printf("Triangle Area: %.2f\n", TRIANGLE_AREA(base, height));
    printf("Triangle Perimeter: %.2f\n", TRIANGLE_PERIMETER(a, b, c));

    printf("Square Area: %.2f\n", SQUARE_AREA(side));
    printf("Square Perimeter: %.2f\n", SQUARE_PERIMETER(side));

    printf("Circle Area: %.2f\n", CIRCLE_AREA(radius));
    printf("Circle Perimeter: %.2f\n", CIRCLE_PERIMETER(radius));

    return 0;
}