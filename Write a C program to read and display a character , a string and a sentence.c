/*Write a C program to read and display a character , a string and a sentence */


#include<stdio.h>
int main()
{
	char ch;
	char str[20];
	char sen[80];
	
	scanf("%c",&ch);
	scanf("%s\n",str);
	scanf("%[^\n]s",sen);
	
	printf("Character is %c\n",ch);
	printf("String is %s\n",str);
	printf("Sentence is %s",sen);  
	
}