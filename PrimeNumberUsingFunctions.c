#include<stdio.h>
int factorcount(int n)
{
	int i,fc=2;//for any number from 1 to that, after half the numbers no number can be divisible..
	if(n==1)// doesn't work for 1 if we take for loop only.. so we have to take if condition for half numbers case
	{
		return 1;
	}
	for(i=2;i<=n/2;i++)		//for(i=1;i<=n;i++)
	{						//{
		if(n%i==0)			//	if(n%i==0)
		{					//	{
			fc++;			//		fc++;
		}					//	}
	}						//}
	return fc;
}
int main()
{
	int n,fc;
	printf("Enter a number(greater than 0): ");
	scanf("%d", &n);
	fc=factorcount(n);
	printf("Factors for the number %d are: %d", n, fc);
	if(fc==2)
	{
		printf("\nThe number %d is a prime number", n);//prime number has only two factors one and itself
	}
	else if(fc==1)
	{
		printf("\nThe number is neither prime nor composite");
	}
	else
	{
		printf("\nThe number %d is not a prime number", n);
	}
}