#include<stdio.h>
int main()
{
	int i,n,res,i1,n1;
	printf("Enter value of n: ");
	scanf("%d", &n);
	n1=n;
	i=1;
	i1=i;
	printf("For loop:\n");
	for(i=1;i<=10;i++)
	{
		res=i*n;
		printf("%d x %d = %d\n", n, i, res);
	}
	printf("\n");
	printf("While loop:\n");
	i=i1;
	n=n1;
	while(i<=10)
	{
		res=i*n;
		printf("%d x %d = %d\n", n, i, res);
		i++;
	}
}
