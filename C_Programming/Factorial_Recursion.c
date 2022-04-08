#include<stdio.h>
int fac(int n)
{
    if(n==0)
        return 1;
    else
        return (fac (n-1)*n);
}
int main()
{
    int num,f;
    printf("Enter a number: ");
    scanf("%d",&num);
    f=fac(num);
    printf("Factorial of %d is: %d",num,f);
    return 0;
}