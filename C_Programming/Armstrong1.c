#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
        printf("It is armstrong number");
    else
        printf("Not a armstrong number");
    
    return 0;
}