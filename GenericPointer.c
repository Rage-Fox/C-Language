#include<stdio.h>
int main()
{
	void *ptr;//generic pointer stores any datatype address when given void before it
	int a=10;
	float b=6.7;
	ptr=&a;
	printf("%d %d",&a,ptr);
	printf("\n%d %d",a,*(int *)ptr);//void pointer has to be printed the type of value it is about to print
	ptr=&b;
	printf("\n%.2f %.2f",b,*(float *)ptr);
}