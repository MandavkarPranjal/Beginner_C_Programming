// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *fp;

//     char ch;
//     int line=1;

//     fp=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\File_handling3.c","r");

//     if(fp == NULL)
//     {
//         printf("Error!!\nUnable to open file.");
//         exit(1);
//     }

//     while((ch=fgetc(fp)) != EOF)
//     {
//         if(ch == '\n' || ch == '\0')
//             line++;
//     }

//     printf("\nTotal Lines: %d\n",line);

//     fclose(fp); 
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     FILE *fp;
//     char c[100];
    
//     fp=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test1.txt","a");

//     if(fp == NULL)
//     {
//         printf("Error!!\nUnable to open file.");
//         exit(1);
//     }
    
//     printf("Enter the data you want to store in file (For Space-' ' use '_'): ");
//     scanf("%s",c);
//     fprintf(fp,"\n%s",c);
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *fp;
//     char ch;
//     fp=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test1.txt","r");

//     if(fp == NULL)
//     {
//         printf("Error!!\nUnable to open file.");
//         exit(1);
//     }
//     printf("Data in file is:\n");
//     while(1)
//     {
//         ch=fgetc(fp);
//         if(ch==EOF){
//             printf("\n");
//             break;
//         }
//         printf("%c",ch);
//     }
//     printf("\n");
//     fclose(fp);

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char c[100];
    int limit;
    fp=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test2.txt","w");

    if(fp == NULL)
    {
        printf("Error!!\nUnable to open file.");
        exit(1);
    }
    limit=sizeof(c)/sizeof(char);
    printf("Enter the data you want to store in file \n(For Space-' ' use '_')\n[Maximum charcters you can enter is: %d]: ",limit);
    scanf("%s",c);
    fprintf(fp,"%s",c);
    printf("Data Successfully Stored.");
    
    fclose(fp);
    return 0;
}