//write a c program to write transpose of a given matrix//
#include<stdio.h>
int main()
{
	int mat[3][3],i,j,tmat[3][3];
	printf("\nEnter the elements of the matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmat[j][i] = mat[i][j];
			}
		}
		printf("\nTranspose of the given matrix is \n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d", tmat[i][j]);
			}
			printf("\n");
	 }
	}