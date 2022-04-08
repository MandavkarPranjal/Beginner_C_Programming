// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     int num;
//     fp=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test.txt","w");
//     printf("File successfully created\n");
//     printf("Enter a number:");
//     scanf("%d",&num);
//     fprintf(fp,"%d",num);
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp;
//     int num;
//     fp=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test.txt","r");
//     if(fp==NULL){
//         printf("Error!!");
//         exit(1);
//     }
//     fscanf(fp,"%d",&num);
//     printf("Number in file is: %d",num);
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test.txt","r"); // "w","a"
//     int num,temp;
//     char ch;
//     while(1){
//         ch=fgetc(fp);
//         if(ch==EOF)
//             break;
//         printf("%c",ch);
//     }
//     // printf("\nEnter a number: ");
//     // scanf("%d",&num);
//     // fprintf(fp,"\n%d",num);
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp1,*fp2;
//     char c;
//     fp1=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test.txt","r");
//     if(fp1 == NULL){
//         printf("Error!!\nCannot open the file");
//         exit(1);
//     }
//     fp2=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Output.txt","w");
//     if(fp2 == NULL){
//         printf("Error!!\nCannot open the file");
//         exit(1);
//     }
//     c=fgetc(fp1);
//     while(c != EOF){
//         fputc(c,fp2);
//         c=fgetc(fp1);
//     }
//     printf("\nContent copied to %s","C:\\Study\\Documents\\C_Programming\\File Handing\\Output.txt");
//     fclose(fp1);
//     fclose(fp2);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp1,*fp2;
    char input[50],c;
    fp1=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Test.txt","w");
    // fp2=fopen("C:\\Study\\Documents\\C_Programming\\File Handing\\Output.txt","w");
    if(fp1 == NULL){
        printf("Error!!\nCannot open the file");
        exit(1);
    }
    // if(fp2 == NULL){
    //     printf("Error!!\nCannot open the file");
    //     exit(1);
    // }
    printf("Enter Your Name: ");
    scanf("%s",input);
    printf("%s",input);
    fprintf(fp1,"%s",input);
    fclose(fp1);
    return 0;
}