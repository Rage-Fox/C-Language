#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("%d<%d = %d\n", a, b, a<b);
	printf("%d>%d = %d\n", a, b, a>b);
	printf("%d<=%d = %d\n", a, b, a<=b);
	printf("%d>=%d = %d\n", a, b, a>=b);
	printf("%d==%d = %d\n", a, b, a==b);
	printf("%d!=%d = %d\n", a, b, a!=b);
	return 0;
}
