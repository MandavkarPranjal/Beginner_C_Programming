#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fptr1, *fptr2;
   char filename[100], c;
   printf("Enter the filename to open for reading \n");
   scanf("%s",filename);
   fptr1 = fopen("D:\\file1.txt", "r");
   if (fptr1 == NULL)
   {
        printf("Cannot open file %s \n", "D:\\file1.txt");
        exit(0);
   }
   printf("Enter the filename to open for writing \n");
   scanf("%s", filename);
   fptr2 = fopen("D:\\file2.txt", "w");
   if (fptr2 == NULL)
   {
        printf("Cannot open file %s \n", "D:\\file2.txt");
        exit(0);
   }
   c = fgetc(fptr1);
   while (c != EOF)
   {
        fputc(c, fptr2);
        c = fgetc(fptr1);
   }
   printf("\nContents copied to %s", "D:\\file2.txt");
   fclose(fptr1);
   fclose(fptr2);
   return 0;
}
