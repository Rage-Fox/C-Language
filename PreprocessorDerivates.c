#include<stdio.h>
int fun(int);
int b=100;
#define X a*a//preprocessor derivatives happens before main and works as anonymous functions
int main()
{
	int a=10;
	printf("%d %d",a,X);
}