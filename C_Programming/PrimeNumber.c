#include<stdio.h>  
int main()
{    
    int i,n,m,flag=0;    
    printf("Enter the number to check prime: ");    
    scanf("%d",&n);    
    m=n/2;    
    for(i=2;i<=m;i++)    
    {  
        if(n%i==0)    
        {       
            printf("It is not prime");    
            flag=1;    
            break;    
        }    
    }
    if(n==1)
        printf("%d is niether prime nor consonant",n);    
    else if(flag==0)    
        printf("It is prime");     
    return 0;  
}    