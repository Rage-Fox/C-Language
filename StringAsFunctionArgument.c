#include<stdio.h>
#include<string.h>
void fun(char *str)
{
	printf("%s", str);
}
int main()
{
	int i,n;
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s", &str);
	fun(str);//passing address of first character
}