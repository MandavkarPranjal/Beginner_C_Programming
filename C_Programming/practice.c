//WAP to accept no. from user make it table.
/*
#include<stdio.h>
int main()
{
	int i=1,num,ans;
	printf("Please Enter Your Number: ");
	scanf("%d",&num);
	while (i<=10)
	{
		ans=num*i;
		printf("%d INTO %d Is %d\n",num,i,ans);
		i++;
	}
	
	return 0;
}
*/
/*
#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	struct student a;
	printf("Enter your roll no.: ");
	scanf("%d",&a.roll);
	printf("Enter your name: ");
	scanf("%s",&a.name);
	printf("Enter your marks: ");
	scanf("%f",&a.marks);
	printf("%d,%s,%f",a.roll,a.name,a.marks);
	return 0;
}
*/
/*
#include<stdio.h>
int fact(int);
int main(){
	int num,f;
	printf("Enter a number: ");
	scanf("%d",&num);
	f=fact(num);
	printf("The factorial of %d is: %d",num,f);
	return 0;
}int fact(int a){
	if(a==0)
        return 1;
    else
        return (fact (a-1)*a);
}
*/

#include<stdio.h>
int add(int, int, int);
int sub(int, int, int);
int mul(int, int, int);
int div(int, int, int);
int main(){
	int n1,n2,n3,select;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("Select the choice you want to perform:\n1.Addition\n2.Subtraction\n3.Multipication\n4.All\nSelection: ");
	scanf("%d",&select);
	if(select==1)
		add(n1,n2,n3);
	else if(select==2)
		sub(n1,n2,n3);
	else if(select==3)
		mul(n1,n2,n3);
	else if(select==4){
		add(n1,n2,n3);
		sub(n1,n2,n3);
		mul(n1,n2,n3);
	}
	else
		printf("Please select valid choice!\n");
	printf("Code complete");
	return 0;
}int add(int a, int b, int c){
	int sum;
	sum=a+b+c;
	printf("Sum of %d, %d and %d is %d\n",a,b,c,sum);
}int sub(int a,int b, int c){
	int subt;
	subt=a-b-c;
	printf("Subtraction of %d, %d and %d is %d\n",a,b,c,subt);
}int mul(int a,int b, int c){
	int mult;
	mult=a*b*c;
	printf("Multiplication of %d, %d and %d is %d\n",a,b,c,mult);
}