#include<stdio.h>
int main()
{
    float base,height,area;
	printf("enter the value of base");
	scanf("%f",&base);
	
	printf("enter the value of height");
	scanf("%f",&height);
	
	area=0.5*base*height;
	printf("area of triangle is %2f",area);
	
}