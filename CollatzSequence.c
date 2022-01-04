#include<stdio.h>
int main()
{
	int n,n1;
	printf("Enter value of n: ");
	scanf("%d", &n);
	n1=n;
	printf("Collatz Sequence Method is %d, ", n);
	while(n>1)
	{
		if(n%2==0)
		{
			n=n/2;
			printf("%d, ", n);
		}
		else if(!(n%2==0))
		{
			n=3*n+1;
			printf("%d, ", n);
		}
	} //while loop ends
}
