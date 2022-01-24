#include<stdio.h>
int main()
{
	char str[100];
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	scanf(" %[^\n]s", &str);//after reading a integer it doesn't take string so we have to give space for string inside scanf
	printf("%d %s", n, str);//string takes enter as a string
}