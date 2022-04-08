//WAP to accept marks from user and let him know his prcrentage and grade with something written into it.
#include<stdio.h>
int main()
{
	float marks,c,english,maths,os,cfn,per;
	char grade;
	
	printf("Please Enter Your C programming Marks: ");
	scanf("%f",&c);
	
	printf("Please Enter Your English Marks: ");
	scanf("%f",&english);
	
	printf("Please Enter Your Maths Marks: ");
	scanf("%f",&maths);
	
	printf("Please Enter Your OS Marks: ");
	scanf("%f",&os);
	
	printf("Please enter Your CFN Marks: ");
	sacnf("%f",&cfn);
	
	marks=c+english+maths+os+cfn;
	printf("Your Total Marks is %f",marks);
	
	per=(marks/5.00);
	printf("Your Percentage is %f%",per);
	return 0;

}