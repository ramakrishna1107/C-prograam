#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two integer numbers");
	scanf("%d%d",&a,&b);
	printf("\nbitwise operation of %d & %d is %d",a,b,a&b);
	printf("\nbitwise operation of %d | %d is %d",a,b,a|b);
	printf("\nbitwise operation of %d ^ %d is %d",a,b,a^b);
	printf("\nbitwise operation of %d << %d is %d",a,b,a<<b);
	printf("\nbitwise operation of %d >> %d is %d",a,b,a>>b);
    
    return 0;
}