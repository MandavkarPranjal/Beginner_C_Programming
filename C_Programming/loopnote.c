#include<stdio.h>
int main()
{
int num,i,ans;
printf("Enter your number: ");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
ans=num*i;
printf("%d\n"ans);
}
}