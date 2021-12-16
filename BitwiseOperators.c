#include <stdio.h>
int main()
{
	int a,b,result;
	printf("Enter value a : ");
	scanf("%d", &a);
	printf("Enter value b : ");
	scanf("%d", &b);
	printf("Bitwise AND: %d\n", a&b );
	printf("Bitwise OR: %d\n", a|b);
	printf("Bitwise XOR: %d\n", a^b);
	printf("Bitwise a<<1: %d\n", a<<1);
	printf("Bitwise b>>1: %d\n", b>>1);
	printf("Bitwise ~a: %d\n", ~a);
	return 0;
}
