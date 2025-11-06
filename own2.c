#include<stdio.h>
int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,sub;
	
	printf("Enter any two integer numbers");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	diff=num1-num2;
	printf("Integer addition is %d\n",add);
	printf("Integer subtraction is %d\n",diff);
	
	printf("\nEnter any two real numbers");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	printf("Real numbers addition is %.2f\n",sum);
	printf("Real numbers subtraction is %.2f\n",sub);
}