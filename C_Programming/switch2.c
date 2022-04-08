#include<stdio.h>
int main()
{
	char alp;
	printf("Enter Alphabet: ");
	scanf("%c",&alp);
	switch(alp)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		printf("%c is Vowel",alp);
		break;
		default:
		printf("%c is Consanant",alp);	
	}
	return 0;
}