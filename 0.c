#include <stdio.h>
 int main() 
 {
  float base, height, area;
   // Ask the user to enter the base of the triangle 
   printf("Enter the base of the triangle: ");
   scanf("%f", &base);
   // Ask the user to enter the height of the triangle 
   printf("Enter the height of the triangle: "); 
   scanf("%f", &height);
    // Calculate the area using the formula: area = 0.5 * base * height
	area = 0.5 * base * height; 
	// Display the result 
	printf("Area of the triangle is: %f\n", area); 
	return 0;
}

