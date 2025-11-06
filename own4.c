#include <stdio.h>
#include <math.h>  // Required for pow()

int main() {
    float principal, rate, time, si, ci;

    // Input
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculations
    si = (principal * rate * time) / 100.0;
    ci = principal * pow((1 + rate / 100.0), time) - principal;

    // Output
    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f\n", ci);

    return 0;
}
