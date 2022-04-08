#include<stdio.h>
int main()
{
	int i,num,ans;
	printf("Enter a number:");
	scanf("%d",&num);
	for (i=1;i<=10;i++)
	{
		ans=i*num;
		printf("%d\n",ans);
	}
}
