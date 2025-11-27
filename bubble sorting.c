//write a c program to arrange the elements in ascending order using bubble sort//
#include<stdio.h>
int main()
{
	int a[10],i,j,temp,n;
	printf("\nenter the size of the array ");
	scanf("%d",&n);
	printf("\nenter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
printf("\nsorted elemens are ");
for(i=0;i<n;i++)
	printf("%d ",a[i]);
}