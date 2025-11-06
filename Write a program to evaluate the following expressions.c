/* Write a program to evaluate the following expressions a/b*c-b+a*d/3 and j=(i++)+(++i)*/
#include<stdio.h>
int  main()
{
	float a,b,c,d,result;
	int i,j;
	printf("enter the value of a,b,c,d,i");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	scanf("%d",&i);
	
	result=a/b*c-b+a*d/3;
	j=(i++)+(++i);
	printf("Result is %f",result);
	printf("\nThe value of j is %d",j);
}