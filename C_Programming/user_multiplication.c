#include<stdio.h>
int main()
{
	int no1,no2,no3,ans;
	printf("Please enter First number:");
	scanf("%d",&no1);
	printf("\nPlease enter Second number:");
	scanf("%d",&no2);
	printf("\nPlease enter Third number:");
	scanf("%d",&no3);
	ans=no1*no2*no3;
	printf("\nMultiplication of numbers is %d",ans);
	return 0;
}