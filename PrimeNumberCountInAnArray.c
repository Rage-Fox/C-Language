#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i,sq;
	sq=sqrt(n);
	if(n==1)
	{
		return 0;
	}
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,arr[100],i,pc=0;
	printf("Enter a number(greater than 0): ");
	scanf("%d",&n);
	printf("Enter the values:\n"); 
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		//pc+=isprime(arr[i]);
		if(isprime(arr[i]))
		{
			printf("%d is prime\n",arr[i]);
		}
		else
		{
			printf("%d is not prime\n",arr[i]);
		}
	}
	//printf("%d",pc);
}