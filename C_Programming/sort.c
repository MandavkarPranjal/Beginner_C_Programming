// #include<stdio.h>
// int main()
// {
//     int a[10]={98,65,10,3,6,91,4,5,100,78};
//     int i,j,temp;
//     temp=a[0];
//     for(i=0;i<10;i++)
//     {
//         for(j=i+1;j<10;j++)
//         {
//            if(a[j]>a[i])
//            {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//            }
//         }
//     }
//     printf("Sorted element is:\n");
//     for(i=0;i<10;i++)
//         printf("%d\n",a[i]);
//     return 0;
// }

// Dynamic
// #include<stdio.h>
// int main()
// {
//     int a[25]={};
//     int i,j,temp,total,choice;
//     printf("How many number you want to sort? (Total numbers)[Maximum number can be entered is 25]: ");
//     scanf("%d",&total);
//     printf("==============================================================================\n");
//     printf("Enter numbers:\n");
//     for(i=0;i<total;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     temp=a[0];
//     for(i=1;1<10;i++)
//     {
//         printf("==============================================================================\n");
//         printf("How do sort the elements?\n1.Assending\n2.Decending\nChoose: ");
//         scanf("%d",&choice);
//             if(choice==1)
//             {
//                 for(i=0;i<total;i++)
//                 {
//                     for(j=i+1;j<total;j++)
//                     {
//                         if(a[j]<a[i])
//                         {
//                             temp=a[i];
//                             a[i]=a[j];
//                             a[j]=temp;
//                         }
//                     }
//                 }
//                 break;
//             }
//             else if(choice==2)
//             {
//                 for(i=0;i<total;i++)
//                 {
//                     for(j=i+1;j<total;j++)
//                     {
//                         if(a[j]>a[i])
//                         {
//                             temp=a[i];
//                             a[i]=a[j];
//                             a[j]=temp;
//                         }
//                     }
//                 }
//                 break;
//             }
//             else
//             {
//                 printf("------------------------------------------------------------------------------\n");
//                 printf("Please enter valid choice!\nTry Again\n");
//             }
//     }
//     printf("==============================================================================\n");
//     printf("Sorted elements is:\n");
//     for(i=0;i<total;i++)
//         printf("%d\n",a[i]);
//     return 0;
// }

//Dynamic
#include<stdio.h>
int main()
{
    int a[]={};
    int length;
    length=sizeof(a)/sizeof(int);
    printf("Total numbers you have entered: %d",length);
    return 0;
}