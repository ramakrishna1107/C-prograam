//Write a c program to read five subjects marks and display the average//
#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,average;
	printf("Enter marks of five subjects");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	
	average=(m1+m2+m3+m4+m5)/5;
	printf("Average of five subjects is %f",average);
	
}