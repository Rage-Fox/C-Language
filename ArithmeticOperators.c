#include <stdio.h>
int main ()
{
	int a, b, result;
	printf("Enter integer value for a : ");
	scanf("%d", &a);
	printf("Enter integer value for b : ");
	scanf("%d",&b);
	result = a + b;
	printf("a + b value is %d.\n", result);
	result = a - b;
	printf("a - b value is %d.\n", result);
	result = a * b;
	printf("a * b value is %d.\n", result);
	result = a / b;
	printf("a / b value is %d.\n", result);
	result = a % b;
	printf("a % b value is %d.\n", result);
	
	return 0;
}
