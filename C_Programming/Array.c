#include<stdio.h>
int main()
{
    int sum=0,i,a[6]={10,98,56,45,30,40};
    printf("Elements in array: ");
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    for(i=0;i<6;i++)
        sum=sum+a[i];
    printf("\nSum of all elements of array is: %d",sum);
    return 0;
}