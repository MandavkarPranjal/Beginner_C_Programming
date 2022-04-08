//int a = 10/45*23%45/(45%4*21)
//float a = 10+45.0*23-45+(4*21.0)
#include<stdio.h>
int main() 
{
	int a=10/45*23%45/(45%4*21);
	printf("%d",a);
	
	float b = 10+45.0*23-45+(4*21.0);
	printf("\n%f",b);
	return 0;
}