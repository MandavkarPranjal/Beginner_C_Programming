#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number%5==0)
	{
		printf("%d is divisble by 5",number);
	}
	
	else if (number%11==0)
	{
		printf("%d is divisble by 11",number);
	}
	
	else
	{
		printf("%d is not divisble by 5 nor 11",number);
	}

	return 0;
}