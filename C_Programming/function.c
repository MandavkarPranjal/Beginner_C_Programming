// // EXAMPLE 1:


// #include<stdio.h>
// int add(int,int);
// int main()
// {
//     int n1=0,n2=0,sum=0;
//     printf("Enter two number: ");
//     scanf("%d%d",&n1,&n2);
//     sum = add (n1,n2);

//     printf("Addition of entered number is %d",sum);

//     return 0;
// }
// add(int a,int b){
//   return  a+b;
// }

// EXAMPLE 2:

#include<stdio.h>
int mul(int, int, int ),div(int, int);
int main()
{
    int num1=0,num2=0,num3=0,i;
    char select;
    printf("Enter three number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    mul(num1, num2 ,num3);

    for(i=1;1<10;i++){
        printf("\nDo you want do divide (Y/N)? ");
        scanf("%s",&select);

        if (select == 'Y' || select == 'y'){
            div(num1, num2);
                break;
        } else if(select == 'N' || select == 'n'){
            printf("Goodbye......");
                break;
        } else
            printf("Please choose valid selection!!\nTry again");
        }
    
    return 0;
}
mul (int a,int b, int c){
    double mult;
    mult=a*b*c;
    printf("Multiplication of entered number is %f",mult);
} div (int a, int b){
    double divd;
    divd=a/b;
    printf("Division of two number is %f",divd);
}