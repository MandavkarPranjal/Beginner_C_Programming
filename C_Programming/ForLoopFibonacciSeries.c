//fibonacci series
#include<stdio.h>
int main()
{
	int a=0,b=1,sum,i;
	printf("%d",a);
	printf("\t%d",b);
	for (i=1;i<=10;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("\t%d",sum);
	}
	return 0;
}
