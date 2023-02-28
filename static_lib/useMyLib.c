#include "myMath.h"
#include <stdio.h>

int main() {
    double a = 4.0;
    double b = 2.0;

    printf("Addition: %lf\n", add(a, b));
    printf("Subtraction: %lf\n", subtract(a, b));
    printf("Multiplication: %lf\n", multiply(a, b));
    printf("Division: %lf\n", divide(a, b));
    printf("Square Root: %lf\n", squareRoot(a));
    printf("Square: %lf\n", square(a));
    printf("Cube: %lf\n", cube(a));
    printf("Cube Root: %lf\n", cubeRoot(a));

    return 0;
}
