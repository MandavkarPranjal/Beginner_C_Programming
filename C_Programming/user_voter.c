#include<stdio.h>
int main()
{
	int age;
	printf("Please enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nYou can vote");
	}
	else
	{
		printf("\nYou can't vote");
	}
	return 0;
}