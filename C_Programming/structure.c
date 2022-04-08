#include<stdio.h>
#include<string.h>
struct student
{
    int age;
    char name[25];
    float idno;
};
int main()
{
    int i;
    for (i=1;i<=10;i++){
        struct student i;
        printf("\n---------------------------------------------------------------------------\n");
        printf("Enter your name: ");
        scanf("%s",&i.name);
        printf("Enter your age: ");
        scanf("%d",&i.age);
        printf("Enter your ID No.: ");
        scanf("%f",&i.idno);
        printf("\n=====================================================\n");
        printf("student:- \nName: %s",i.name);
        printf("\nAge: %d",i.age);
        printf("\nID No.: %f",i.idno);
    }
    return 0;
}