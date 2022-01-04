#include<stdio.h>
int main()
{
	int i,n,r1,r2,i1,n1;
	printf("Enter number n:");
	scanf("%d", &n);
	printf("Enter range1 r1:");
	scanf("%d", &r1);
	printf("Enter range2 r2:");
	scanf("%d", &r2);
	i=1;
	i1=i;
	n1=n;
	printf("For loop:\n");
	if(r1<r2)
	{
		for(i=r1;i<=r2;i++)
		{
			printf("%d x %d = %d\n", n,i,i*n);
		}
	}
	else if(r2<r1)
	{
		for(i=r2;i<=r1;i++)
		{
			printf("%d x %d = %d\n", n,i,i*n);
		}
	}
	i=1;
	i1=i;
	n1=n;
	printf("Without it's multiples:\n");
	if(r1<r2)
	{
		for(i=r1;i<=r2;i++)
		{
			if(!(i%n==0))
			{
				printf("%d x %d = %d\n", n,i,i*n);
			}
		}
	}
	else if(r2<r1)
	{
		for(i=r2;i<=r1;i++)
		{
			if(!(i%n==0))
			{
				printf("%d x %d = %d\n", n,i,i*n);
			}
		}
	}
}
/*Swapping logic V.V.IMPORTANT
#include<stdio.h>
int main()
{
	int i,n,r1,r2,temp;
	if(r1>r2) //r1=10 r2=4 temp=empty
	{
		temp=r2; //temp=10
		r2=r1; //r2=4
		r1=temp; //r1=10
	}
}
*/
