#include<stdio.h>
int main()
{
	int i=1,sum=0;
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=10);
	printf("The sum of the First 10 is %d",sum);
	return 0;
}
