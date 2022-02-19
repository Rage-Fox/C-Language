#include<stdio.h>
int fun(int n)//function definition
{
	if(n<=0)
	{
		return n;
	}
	return fun(n-1)+fun(n-2);//1st line and 2nd line
}
int main()
{
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	n=fun(n);//function call
	printf("%d",n);
}