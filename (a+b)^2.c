#include <stdio.h>
int main()
{
	int a,b,result1,result2;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);
	result1 = a*a + b*b + 2*a*b;
	result2 = a*a*a + 3*a*a*b +3*a*b*b + b*b*b;
	printf("Entered the value of a is %d.\n", *&a);
	printf("Entered the value of b is %d.\n", *&b);
	printf("The value of (a+b)^2 is : %d.\n", result1);
	printf("The value of (a+b)^3 is : %d.\n", result2);
	return 0;
}
