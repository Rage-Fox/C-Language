#include<stdio.h>
void fun(int n)//function definition
{
	if(n==0)
	{
		return;
	}
	fun(n-1);//1st line
	printf("%d ",n);//2nd line
}
int main()
{
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	fun(n);//function call
}