#include<stdio.h>
int main()
{
	char grade;
	printf("Enter your Grade in Capital Letter:");
	scanf("%c",&grade);
	switch(grade)
	{
		case 'A':
		printf("!!Excellent!!");
		break;
		case 'B':
		printf("Well Done!!");
		break;
		case 'C':
		printf("Great");
		break;
		case 'D':
		printf("Good");
		break;
		case 'E':
		printf("Too Bad");
		break;
		case 'F':
		printf("Better Try Next Time");
		break;
		default:
		printf("Please Enter Your Valid Grade");
	}
	return 0;
}