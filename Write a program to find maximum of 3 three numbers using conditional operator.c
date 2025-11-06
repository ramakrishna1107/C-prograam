/* Write a program to find maximum of any three numbers using conditional operator*/

#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	
	printf("Maximum of three numbers is %d",max);
	
}