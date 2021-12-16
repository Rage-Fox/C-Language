#include <stdio.h>
int main()
{
	int a,b,result;
	printf("Enter the value 1 : ");
	scanf("%d", &a);
	printf("Enter the value 2 : ");
	scanf("%d", &b);
	printf("Entered the value of a is %d.\n", *&a);
	printf("Entered the value of b is %d.\n", *&b);
	printf("Sum value is %d.\n", a+b);
	printf("Subtraction value is %d.\n", a-b);
	printf("Multiplication value is %d.\n", a*b);
	printf("Division value is %d.\n", a/b);
	printf("Modulo Division value is %d.\n", a%b);
	return 0;
}

