#include <stdio.h> // Required for standard input/output functions like printf and scanf
#include <math.h>  // Required for the pow() function used in compound interest

int main() {
    float principal, rate, time; // Declare variables for principal, rate, and time
    float simpleInterest, compoundInterest;

    // Get input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal); // Read the principal amount from the user

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate); // Read the interest rate

    printf("Enter the time period (in years): ");
    scanf("%f", &time); // Read the time period

    // Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    // Formula: CI = P * (1 + R/100)^T - P
    // pow(base, exponent) calculates base raised to the power of exponent
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Simple Interest: %.2f\n", simpleInterest); // Display simple interest formatted to 2 decimal places
    printf("Compound Interest: %.2f\n", compoundInterest); // Display compound interest formatted to 2 decimal places

    return 0; // Indicate successful program execution
}