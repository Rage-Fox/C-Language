#include <stdio.h>
int main()
{
	float a,b,c;
	int andd,orr,nott;
	printf("Integer value of a = ");
	scanf("%f", &a);
	printf("Integer value of b = ");
	scanf("%f", &b);
	printf("Integer value of c = ");
	scanf("%f", &c);
	andd = a>b && b>c;
	orr = a>b || b>c;
	nott = !(a>b && b>c);
	printf("Logical AND (a>b&&b>c) = %d\n", andd);
	printf("Logical OR (a>b||b>c) = %d\n", orr);
	printf("Logical NOT [!(a>b&&b>c)] = %d\n", nott);
}
