//comparission or relationship operator(>,<,==,>=,<=,!=)

#include<stdio.h>
int main()
{
	int no;
	printf("Please enter number:");
	scanf("%d",&no);
	if (no>0)
	{
		printf("\n%d is positive number",no);
	}
	else 
	{
		printf("\n%d is negative number",no);
	}
	return 0;
}