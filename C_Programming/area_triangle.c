#include<stdio.h>
int main()
{
	float b,h,area;
	printf("Enter Base and Height of Triangle respectively:");
	scanf("%f %f",&b,&h);
	
	area=(b*h)/2;
	printf("Area of triangle is %f",area);
	return 0;
}