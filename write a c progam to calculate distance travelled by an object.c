/* write a c progam to calculate distance travelled by an object*/

#include<stdio.h>
int main()
{
	float acc,vel,dist;
	int time;
	
	printf("Enter value for acceleration");
	scanf("%f",&acc);
	
	printf("\nEnter value for velocity");
	scanf("%f",&vel);
	
	printf("\nEnter value for time");
	scanf("%d",&time);
	
	dist = (vel*time) + (acc*time*time)/2.0;
	
	printf("\nThe distance is %f",dist);
}