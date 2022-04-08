#include<stdio.h>
int main()
{
	float r,area;
	printf("Please Enter radius of circle in meters: ");
	scanf("%f",&r);
	 
	area=(22*r*r)/7;
	printf("Area of circle is %fsq.m",area);
	return 0;
}