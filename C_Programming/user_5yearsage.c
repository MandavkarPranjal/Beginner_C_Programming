//WAP to accept current age of user and find user age after 5 years

#include<stdio.h>
int main()
{
	int age,fur;
	printf("Please enter your current age:");
	scanf("%d",&age);
	
	fur=age+5;
	printf("Your age after 5 years will be %d",fur);
	return 0;
}