/* write a c program to read fahrenheit to celcius and celcius to fahrenheit*/

#include<stdio.h>
int main()
{
	float fah,cel;
	printf("Enter the value of fahrenheit");
	scanf("%f",&fah);
	cel=(fah-32.0)*(5.0/9.0);
	printf("celsius is %f\n",cel);
	
	printf("\nEnter the value of celsius");
	scanf("%f",&cel);
	fah = cel * (9.0/5.0)+32.0;
	printf("Fahrenheit is %f\n",fah);
	 
}