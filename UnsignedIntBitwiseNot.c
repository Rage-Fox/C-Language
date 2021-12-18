#include <stdio.h>
int main()
{
	unsigned int a;
	printf("Value of a = ");
	scanf("%u", &a);
	printf("%u", ~a);
	return 0;
}
