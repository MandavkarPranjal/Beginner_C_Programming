//WAP to accept 5 subject marks from student and find out its avg and percentage

#include<stdio.h>
int main()
{
	int c,java,python,net,php;
	float avg,per;
	
	printf("Please enter C programming marks:");
	scanf("%d",&c);
	
	printf("\nPlease enter java marks:");
	scanf("%d",&java);
	
	printf("\nPlease enter python marks:");
	scanf("%d",&python);
	
	printf("\nPlease enter net marks:");
	scanf("%d",&net);
	
	printf("\nPlease enter php marks:");
	scanf("%d",&php);
	
	avg=(c+java+python+net+php)/5.00;
	printf("\nYour average is %f",avg);
	
	per=((c+java+python+net+php)/500.00)*100.00;
	printf("\nYour Percentage is %f",per);
	
	return 0;
}