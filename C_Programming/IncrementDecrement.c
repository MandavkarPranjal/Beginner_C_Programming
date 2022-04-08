//#include<stdio.h>
//int main()
//{
//	int var1=5, var2=5;
//	printf("%d\n",var1++);
//	int b=var1+2;
//	printf("%d\n",b);
//	printf("%d\n",++var2);
//	return 0;
//}
#include<stdio.h>
int  main(){
	int x,y,z;
	printf("Please Enter the Value of x: ");
	scanf("%d",&x);
	printf("Please Enter the Value of y: ");
	scanf("%d",&y);
	printf("Please Enter the Value of z: ");
	scanf("%d",&z);
	++x;
	++y;
	++z;
	printf("Updated value of x is %d\n",x);
	printf("Updated value of y is %d\n",y);
	printf("Updated value of z is %d\n",z);
	return 0;
}
