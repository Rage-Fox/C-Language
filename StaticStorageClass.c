#include<stdio.h>
void fun(int n)
{
	static int a=1;//static remembers past values, without it prints all the same value
	printf("%d ",a++);
	fun(n);
}
int main()
{
	fun(10);
}