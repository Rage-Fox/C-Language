#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Value of a = ");
	scanf("%d", &a);
	printf("Value of b = ");
	scanf("%d", &b);
	c=a++||++b; //a++ -->b=a,a=a+1 //++a -->a=a+1,b=a
	printf("The output in c=a++||++b for a is %d, b is %d, c is %d\n", a, b, c);
	printf("Value of a = ");
	scanf("%d", &a);
	printf("Value of b = ");
	scanf("%d", &b);
	c=a++&&++b; //a++ -->b=a,a=a+1 //++a -->a=a+1,b=a
	printf("The output in c=a++&&++b for a is %d, b is %d, c is %d\n", a, b, c);
}
