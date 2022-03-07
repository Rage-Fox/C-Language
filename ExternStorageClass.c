#include<stdio.h>
extern int a=10;//we can write outside main because it is a global declaration..shows error don't worry
int main()
{
	printf("%d ",a);//10
	{
		int a=100;//declaring int changes a value inside{}
		printf("%d ",a);
	}
	printf("%d ",a);
	{
		a=100;//changes a value in extern
		printf("%d ",a);
	}
	printf("%d ",a);
}