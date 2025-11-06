/*write a c program to find square root of a number*/

#include<stdio.h>
#include<math.h>
int main()
{
	float num,square;
	
	printf("Enter a number:");
	scanf("%f",&num);
	
	square=sqrt(num);
	printf("%f",square);
	
}