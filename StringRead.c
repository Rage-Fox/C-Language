#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter a string: ");
	scanf("%[^\n]s", &str);
	printf("%s", str);//only reads a single word
	//%s it decides space character as /0 and stops the string there while printing
	//so we have to take %[^\n]s makes it until the new line(enter) appears
}