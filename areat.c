#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double angle) {
    return 0.5 * a * b * sin(angle);
}

int main() {
    double a[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    double b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    double angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};

    double maxArea = 0;
    int largestPlot = 0;

    for (int i = 0; i < 6; i++) {
        double area = calculateArea(a[i], b[i], angle[i]);
        if (area > maxArea) {
            maxArea = area;
            largestPlot = i;
        }
        printf("Plot %d area: %.2f\n", i + 1, area);
    }

    printf("The largest plot is Plot %d with an area of %.2f\n", largestPlot + 1, maxArea);
    return 0;
}