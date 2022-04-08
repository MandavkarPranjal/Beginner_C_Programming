#include<stdio.h>
int main()
{
	char opt;
	float ans,num1,num2;
	printf("Select One of the Operator of following (+,-,*,/): ");
	scanf("%c",&opt);
	
	printf("Enter Your Two Number: ");
	scanf("%f %f",&num1,&num2);
	switch (opt)
	{
		case '+':
			ans=num1+num2;
			printf("Addition of %f and %f is %f",num1,num2,ans);
		break;
		case '-':
			ans=num1-num2;
			printf("Subtraction of %f and %f is %f",num1,num2,ans);
		break;
		case '*':
			ans=num1*num2;
			printf("Multiplication of %f and %f is %f",num1,num2,ans);
		break;
		case '/':
			ans=num1/num2;
			printf("Division of %f and %f is %f",num1,num2,ans);
		break;
		default:
			printf("!!Please Enter Valid Operator!!");
	}
	return 0;
}