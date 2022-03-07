#include<stdio.h>
int main()
{
	int a=5;
	{
		int a=10;
		printf("%d",a);
	}
	printf(" %d",a);
	//both the a's are different and the addresses are different too.. lifetime stays upto that block only
}
/*
auto=default storage class
extern
static
register
*/