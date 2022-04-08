#include<stdio.h>
int main()
{
	int no;
	printf("Enter number from 1 to 5:");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
		printf("You have enrolled for C");
		break;
		case 2:
		printf("You have enrolled for Java");
		break;
		case 3:
		printf("You have enrolled for Python");
		break;
		case 4:
		printf("You have enrolled for HTML");
		break;
		case 5:
		printf("You have enrolled for C++");
		break;
		default:
		printf("!!!Please Enter Valid Number!!!");
	}
	return 0;
}