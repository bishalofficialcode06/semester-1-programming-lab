#include <stdio.h>
#include <math.h>

// Write a C program to calculate the area of circle by taking radius as input.
// Take pi = 3.14

int main() {
    float pi = 3.14;
    float radius;
    float circleArea;

    printf("Enter radius of circle : ");
    scanf("%f", &radius);

    circleArea = pi * pow(radius, 2);
    printf("Area of circle = %f", circleArea);

    return 0;
}
