/* Write a C program to check whether the given number is palindrome or not palindrome*/

#include<stdio.h>
int main ()
{
	int num,rev=0,rem,temp;
	printf("Enter any integer number");
	scanf("%d",&num);
	temp=num;
	while (num!=0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if(temp==rev)
	printf("\n The given number %d is palindrome ",temp);
	else
	printf("\n The given number %d is not palindrome ",temp);

}