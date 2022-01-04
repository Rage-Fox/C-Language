#include<stdio.h>
int main()
{
	int i,n,n1;
	printf("Enter value of n:");
	scanf("%d", &n);
	n1=n;
	i=1;
	while(i<=n)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	i=n;
	while(i>=1)
	{
		printf("%d", i);
		i--;
	}
	printf("\n");
	while(n>0) //n!=0 n>0 n>=1
	{
		printf("%d", n);
		n--;
	}
	printf("\n");
	n=n1;
	while(n>0)
	{
		printf("%d", --n);
	}
	printf("\n");
	n=n1;
	while(n--)
	{
		printf("%d", n);
	}
	printf("\n");
	n=n1;
	while(n--)
	{
	}
	printf("%d", n);
	printf("\n");
	n=n1;
	while(--n)
	{
		printf("%d", n);
	}
}
