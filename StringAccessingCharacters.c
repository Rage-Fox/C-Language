#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char str[100];
	printf("Enter a string:\n");
	scanf("%[^\n]s", &str);
	n=strlen(str);//string length
	for(i=0;i<n;i++)//\0 means enter and we can also write str[i]!='0' in the place of
	{
		printf("%d %c\n", i, str[i]);// prints character by character
	}
	printf("\nValue of i after for loop (or) the length of the string is %d", i);//length of the string
}