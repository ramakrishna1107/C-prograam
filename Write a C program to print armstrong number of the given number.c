/* Write a C program to print armstrong number of the given number */

#include<math.h>
#include<stdio.h>
int main ()
{
	int num,sum=0,rem,temp,count=0,original;
	printf("Enter any integer number ");
	scanf("%d",&num);
	
	original=num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		count++;
		temp=temp/10;
	}
	while (num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,count);
		num=num/10;
	}
	if(original==sum)
	printf("\n The given number %d is armstrong",original);
	else
	printf("\n The given number %d is not armstrong",original);
	
}