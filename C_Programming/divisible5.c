#include<stdio.h>
int main()
{
	int num,div;
	printf("Please enter number:");
	scanf("%d",&num);
	div=num%5;
	
	if (div==0)
	{
	printf("HELLO");
    }
    else
    {
    	printf("BYE");
	}

	return 0;}