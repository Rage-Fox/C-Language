#include<stdio.h>
int main()
{
	int i,n,i1,n1;
	printf("Enter n value: ");
	scanf("%d", &n);
	n1=n;
	i=1;
	i1=i;
	while(i<=n)
	{
		if(i==3)
		{
			i++;
			continue;
		}
		printf("%d ", i);
		i += 1;
	}
	printf("\n");
	n=n1;
	i=i1;
	while(i<=n)
	{
		if(i%2==0)
		{
			i++;
			continue;
		}
		printf("%d ", i);
		i += 1;
	}
	printf("\n");
	n=n1;
	i=i1;
	while(i<=n)
	{
		if(i%3==0)
		{
			i++;
			continue;
		}
		printf("%d ", i);
		i += 1;
	}
}
