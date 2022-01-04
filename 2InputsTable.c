#include<stdio.h>
int main()
{
	int i,n,r,i1,n1;
	printf("Enter number n:");
	scanf("%d", &n);
	printf("Enter range r:");
	scanf("%d", &r);
	i=1;
	i1=i;
	n1=n;
	printf("For loop:\n");
	for(i=1;i<=r;i++)
	{
		printf("%d x %d = %d\n", n,i,i*n);
	}
	i=i1;
	n=n1;
	printf("While loop:\n");
	while(i<=r)
	{
		printf("%d x %d = %d\n", n,i,i*n);
		i++;
	}
}
