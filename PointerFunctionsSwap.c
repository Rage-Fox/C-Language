//Pointer is a variable which is used to hold the address of another variable of same data type
//Pointer variable int *a 
#include<stdio.h>
void swap(int *x, int y)//4,5
{
	*x=100;
	y=200;
}
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	swap(&a,b);
	printf("%d %d", a,b); //address doesn't change while the value changes
}