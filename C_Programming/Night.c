#include<stdio.h>
int main()
{
	int i,a[3]={},b[3]={},c[3]={};
//	printf("elements in array: ");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("enter first number: ");
//	scanf("%d",&a[0]);
//	printf("elements in array: ");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",a[i]);
//	}
	printf("Enter first three numbers: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
//	printf("elements in array: ");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",a[i]);
//	}
	printf("Enter second three numbers: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
		c[i]=a[i]+b[i];
//		printf("the addition %d and %d is %d",a[i],b[i],c[i]);
	}
//	printf("Elements in third array is: ");
	for(i=0;i<3;i++)
	{
		printf("the addition %d and %d is %d\n",a[i],b[i],c[i]);
	}
	
	return 0;
}
