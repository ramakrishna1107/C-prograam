#include<stdio.h>
int fibseries(int );
int main()
{
	int n,i;
	printf("\n Number of digits in series ");
	scanf("%d",&n);
	printf("\n The series is ");
	for(i=0;i<n;i++)
	    printf("%d ",fibseries(i));
	return 0;
}
int fibseries(int x)
{
	if(x==0 || x==1)
	    return x;
	else
	    return fibseries(x-1) + fibseries(x-2);
}