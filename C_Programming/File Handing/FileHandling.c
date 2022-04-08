#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    char path[100],ch;
    int lines=1;
    
    printf("Enter the path of the file: ");
    scanf("%s",path);
    fp=fopen(path,"r");

    if(fp == NULL){
        printf("Error!!\nCan't open the file.\nPlease check the path of the file.");
        exit(EXIT_FAILURE);
    }
    
    while((ch=fgetc(fp)) != EOF){
        if(ch == '\n' || ch == '\0')
            lines++;
    }
    printf("==============================================================================================================================");
    printf("\nTotal lines: %d",lines);
    printf("\n==============================================================================================================================\n");

    fclose(fp);
    return 0;
}