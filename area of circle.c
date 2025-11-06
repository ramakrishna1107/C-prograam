#include <stdio.h>

int main() {
    float radius, area;

    // Ask the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the formula: area = 3.14159 * radius * radius
    area = 3.14 * radius * radius;

    // Display the result
    printf("Area of the circle is: %f\n", area);

    return 0;
}
