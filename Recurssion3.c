#include<stdio.h>
int fun(int n)//function definition
{
	if(n==0)
	{
		return n;
	}
	return n+fun(n-1);//1st line
}
int main()
{
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	n=fun(n);//function call
	printf("%d",n);
}