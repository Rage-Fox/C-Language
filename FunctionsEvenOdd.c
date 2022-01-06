#include <stdio.h>
int iseven(int); //prototype
int main()
{
	int a;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	if(iseven(a)) //function call
	{
		printf("The number is Even");
	}
	else
	{
		printf("The number is Odd");
	}
}
int iseven(int n)
{
	return n%2==0; //no matter how many loops we have, ctrl touches return statement goes back to function call
}