#include<stdio.h>
int main()
{
	int no1,no2,ans;
	printf("Please enter First number:");
	scanf("%d",&no1);
	printf("\nPlease enter Second number:");
	scanf("%d",&no2);
	ans=no1%no2;
	printf("\nRemainder of %d and %d is %d",no1,no2,ans);
	return 0;
}