#include <stdio.h>

int main() {
    float fah, cel;

    // Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah - 32.0) * (5.0 / 9.0);
    printf("Temperature in Celsius: %.2f\n", cel);

    // Celsius to Fahrenheit
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &cel);

    fah = cel * (9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit: %.2f\n", fah);

    return 0;
}
