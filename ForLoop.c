#include<stdio.h>
int main()
{
	int i, row;
	printf("The value of row less than or equal to 10 is is: ");
	scanf("%d", &row);
	printf("i<=row increment is\n");
	for(i=row;i<=row;i++)
	{
		printf("%d\n", i);
	}
	printf("i>=1 decrement is\n");
	for(i=row;i>=1;i--)
	{
		printf("%d\n", i);
	}
}
