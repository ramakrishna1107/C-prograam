/* Write a c program to find simple intrest and compound intrest*/

#include <stdio.h>
int main()
{
	int pa,rate,time,years;
	float si,ci;
	
	printf("Enter principal amount");
	scanf("%d",&pa);
	
	printf("\nEnter rate of intrest");
	scanf("%d",&rate);
	
	printf("\nEnter time");
	scanf("%d",&time);
	
	printf("\nEnter no.of years");
	scanf("%d",&years);
	
	si = (pa*rate*time)/100.0;
	ci = pa*pow((1+rate/100.0),years)-pa;
	
	printf("simple intrest is %f",si);
	printf("compound intrest is %f",ci);
	}