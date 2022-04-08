#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="Hello";
	char str2[]=" World";
	printf("Joining of two string");
	strcat (str1,str2);
	printf("The joined string is: %s",str1);
	printf("\n");
	return 0;
}