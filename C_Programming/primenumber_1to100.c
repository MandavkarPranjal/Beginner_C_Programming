#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("Prime number from 1 to 100:\n");
    for(n=1;n<=100;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0 && n!=1)
            printf("%d ",n);
    }
    return 0;
}