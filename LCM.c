//Write a c program to find LCM of any two numbers//
#include <stdio.h>
int lcm(int,int);
int main() 
{
    int a,b,result;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
    result = lcm(b,a);
    else
    result = lcm(a,b);
    printf("\nLCM is %d ",result);
}
int lcm(int x,int y)
{
	static int temp=0;
	temp=temp+y;
	if(temp%x==0 && temp%y==0)
	    return temp;
	else
     	return lcm(x,y);
}
