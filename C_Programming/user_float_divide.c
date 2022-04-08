#include<stdio.h>
int main()
{
	float no1,no2,ans;
	printf("Please enter numbers");
	scanf("%f %f",&no1,&no2);
	ans=no1/no2;
	printf("divition of %f and %f is %f",no1,no2,ans);
	return 0;
}