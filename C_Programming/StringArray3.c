#include<stdio.h>
#include<string.h>
int main(){
	char input[]="Welcome to IBSAR";
	char str[20];
	int len;
	len = strlen(input);
	printf("The Lenght of string is %d\n",len);
	strcpy (str,input);
	printf("Copied string is %s\n",str);
	
	return 0;
}