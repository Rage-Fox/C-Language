#include <stdio.h>
int add(int a,int b) //prototype function call
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a,b,sum;
	printf("The value of a is: ");
	scanf("%d", &a);
	printf("The value of b is: ");
	scanf("%d", &b);
	sum = add(a,b); //gives error if add function is not defined before int
	printf("The sum of a and b using the function add is %d.", sum);
}
/*
four types of function calls
without args without return value
without args with return value
with args without return value
with args with return value(most used)
*/