//WAP to accept mark from and find out its grade

#include<stdio.h>
int main()
{
	int mark;
	printf("Please enter your marks to check Grade:");
	scanf("%d",&mark);
	
	if(mark>90)
	{
		printf("\nYour Grade is A");
	}
	
	else if(mark<=90 && mark>80)
	{
	    printf("\nYour Grade is B");
    }
    
    else if(mark<=80 && mark>=60)
    {
    	printf("\nYour Grade is C");
	}
	
	else
	{
		printf("\nYour Grade is D");
	}
	return 0;
}