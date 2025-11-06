#include <stdio.h>

int main() {
    float length, width, area;

    // Ask the user to enter the length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Ask the user to enter the width of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area using the formula: area = length * width
    area = length * width;

    // Display the result
    printf("Area of the rectangle is: %f\n", area);

    return 0;
}
