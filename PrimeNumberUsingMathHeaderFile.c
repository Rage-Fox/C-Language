#include<stdio.h>
#include<math.h>
int factorcount(int n)
{
	int i,fc=2,sq;
	sq=sqrt(n);
	if(n==1)
	{
		return 1;
	}
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			fc+=2;
		}
	}
	if(sq*sq==n)
	{
		fc-=1;
	}
	return fc;
}
int main()
{
	int n,fc;
	printf("Enter number: ");
	scanf("%d",&n);
	fc=factorcount(n);
	printf("Factors are %d",fc);
	if(fc==2)
	{
		printf("\nPrime");
	}
	else
	{
		printf("\nNot a Prime");
	}
}