//#include<stdio.h>
//int main()
//{
//	int fact=1,i,num;
//	printf("Please Enter Number: ");
//	scanf("%d",&num);
//	for (i=1;i<=num;i++)
//	{
//		fact=fact*i;
//	}
//	printf("Factorial of Your is %d",fact);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int fact=1,i=1,num;
	printf("Please Enter Number: ");
	scanf("%d",&num);
	while (i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of Your is %d",fact);
	return 0;
}
