//WAP tp accept from user in centimeter and convert in into millimeter

#include<stdio.h>
int main()
{
	int cm,mm;
	printf("Please enter measurement in centimeter:");
	scanf("%d",&cm);
	
	mm=cm*10.00;
	printf("Measurement in millimeter is %d",mm);
	return 0;
}