#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char str[100];
	printf("Enter a string:\n");
	scanf("%[^\n]s", &str);
	n=strlen(str);//string length
	for(i=0;i<=n;i++)
	{
		printf("%d %d\n", i, str[i]);// prints character by character
	}
	printf("%d\n", str);//str meaning address of first character
	printf("%d\n", *str);//value of first address(ascii value)
	printf("%c\n", *str);//element in first address
	/*
	ascii values
	a-z 97-122
	A-Z 65-90
	0-9 48-57
	space 32
	enter 10
	*/
}