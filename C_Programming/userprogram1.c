#include<stdio.h>

void main()
{
	char name[10];
	int age;
	printf("Please enter your name:");
	gets(&name);
	printf("\nPlease enter your age:");
	scanf("%d",&age);
	
	printf("\nYour name is %s",name);
	printf("\nYour age is %d",age);
	
}