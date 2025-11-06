#include<stdio.h>
int main()
{
     char ch;
	 int num;
	 float flt;
	 
	 printf("Enter any character");
	 scanf("%c",&ch);	
	 
	 printf("Enter any integer number");
	 scanf("%d",&num);
	 
	 printf("Enter any real number");
	 scanf("%f",&flt);
	 
	 printf("Character is:%c\nInteger number is:%d\nReal number is:%f",ch,num,flt);
}