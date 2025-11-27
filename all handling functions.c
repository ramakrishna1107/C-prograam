//Write a menu driven c program to perform all handling functions.//

#include<stdio.h>
int main()
{
	char s1[20],s2[20],s3[20];
	int choice,val;
	printf("\n1. Length of the string ");
	printf("\n2. Copy from the string ");
	printf("\n3. Concatenation of two strings ");
	printf("\n4. Comparision of two strings ");
	printf("\n5. Reverse of the string ");
	printf("\n6. Converting into lower-case ");
	printf("\n7. Converting into upper-case ");
	printf("\nEnter your choice ");
	scanf("%d",&choice);
	switch(choice)
	{
	   case 1:
	   {
	   	printf("Enter any string");
	   	scanf("%[^\n]",s1);
	   	printf("Length of the string is %d",strlen(s1));
	   	break;
	   }
	   case 2:
	   {
	   	printf("\nEnter any source string");
	   	scanf("%[^\n]",s1);
	   	strcpy(s2,s1);
	   	printf("After copy the destination string is %s",s2);
	   	break;
	   }
	   case 3:
	   {
	   	printf("Enter any string1");
	   	scanf("%[^\n]",s1);
	   	printf("Enter any string2");
	   	scanf("%[^\n]",s2);
	   	strcat(s1,s2);
	   	printf("After concatination the string is %d",s1);
	   	break;
	   }	
	   case 4:
	   {
	   	printf("Enter any string1");
	   	scanf("%[^\n]",s1);
	   	printf("Enter any string2");
	   	scanf("%[^\n]",s2);
	   	strcat(s1,s2);
	   	val = strcmp(s1,s2);
	   	if(val==0)
	   	  printf("Strings are equal");
	   	else
	   	  printf("Strings are not equal");
	   	break;
	   }
	   case 5:
	   	{
	   	printf("Enter any string");
	   	scanf("%[^\n]",s1);
	   	printf("the reverse of the string is %d",strrev(s1));
	   	break;
		}
		default:
			printf("Please choose an option");
		}
}
