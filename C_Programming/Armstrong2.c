#include<stdio.h>
int main()
{
    int i,r,n,temp,sum=0;
    for(i=1;i<=1000;i++)
    {
        n=i;
        temp=n;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(temp==sum)
            printf("%d is Armstrong\n",temp);
        sum=0;
    }
    return 0;
}