#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
        printf("It is palindrome number");
    else
        printf("not a palindrome number");
    
    return 0;
}