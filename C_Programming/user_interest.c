#include<stdio.h>
int main()
{
	int pr_amt,no_year;
	float rt_nt,si;
	
	printf("Please enter Principal interest:");
	scanf("%d",&pr_amt);
	
	printf("\nPlease enter rate of interest:");
	scanf("%f",&rt_nt);
	
	printf("\nPlease enter number of year:");
	scanf("%d",&no_year);
	
	si=(pr_amt*rt_nt*no_year)/100.00;
	printf("\nYour Simple Interest is %f",si);
	return 0;
}