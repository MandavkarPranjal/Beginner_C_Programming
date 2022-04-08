#include<stdio.h>
int main()
{
	char wrd[5];
	printf("please enter a word");
	gets(&wrd);
	printf("word is %s",wrd);
	return 0;
}