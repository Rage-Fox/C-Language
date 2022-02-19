#include<stdio.h>
void fun(int n)//function definition
{
	if(n==0)
	{
		return;
	}
	printf("%d ",n);
	fun(n-1);//function calling again is called recursion
}
int main()
{
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	fun(n);//function call
}