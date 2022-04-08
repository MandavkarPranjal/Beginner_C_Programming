#include<stdio.h>
int avg(float ,float ,float );
int main()
{
    int n1,n2,n3;
    printf("Enter three number seperated by space: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    avg(n1,n2,n3);
    return 0;
} 
int avg (float a,float b,float c)
{
    float average;
    average=(a+b+c)/3;
    printf("Average of entered numbers is %f",average);
    return 0;
}