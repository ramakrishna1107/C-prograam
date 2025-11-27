//Write a C program to check whether the given element is present in the list or not by using linear search //
#include<stdio.h>
int main()
{
	int a[10],i,target,found=0,n;
	printf("\nEnter the size of the array ");
	scanf("%d",&n);
	
	printf("\nEnter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\nEnter the target elements ");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			found=1;
			break;
			
		}
	}
	if(found==1)
	printf("Element is found");
	else
	printf("Element is not found");
}