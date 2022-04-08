#include<stdio.h>

int main()
{
	int c,os,eng,cfn;
	float avg;
	
	printf("Enter Your C Programming Marks: ");
	scanf("%d",&c);
	
	printf("\nEnter Your OS Marks: ");
	scanf("%d",&os);
	
	printf("\nEnter Your English Marks: ");
	scanf("%d",&eng);
	
	printf("\nEnter Your CFN Marks: ");
	scanf("%d",&cfn);
	
	avg=(c+os+eng+cfn)/4.00;
	printf("\nYour Average Marks is %f",avg);
	return 0;
}