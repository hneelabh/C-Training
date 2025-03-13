#include <stdio.h>
#include <math.h>

double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x[10], y[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter coordinates for point %d (x y): ", i + 1);
        scanf("%lf %lf", &x[i], &y[i]);
    }

    double totalDistance = 0;
    for (int i = 0; i < 9; i++) {
        totalDistance += calculateDistance(x[i], y[i], x[i + 1], y[i + 1]);
    }

    printf("Total distance from the first point to the last point: %.2f\n", totalDistance);
    return 0;
}