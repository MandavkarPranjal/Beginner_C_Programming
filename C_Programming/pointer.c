#include<stdio.h>
int main()
{
    int n=50;
    int *p;
    p=&n;
    printf("The address of p is %x\n",p);
    printf("The value of p is %d\n",*p);
    return 0;
}