/*2.
True or false (0 or not):
a. 4>5 && 5>4

b. 4>5 || 5>4

c. (232+23*1233) || 0

d. (232+23*1233) && 0*/
#include<stdio.h>
int main()
{
	int a=4,b=5;
	if(a>b && b>a)
	{
		printf("It is false");
	}
	else if(a>b || b>a)
	{
		printf("It is true");
	}
	return 0;
}