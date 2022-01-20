#include<stdio.h>
int countdigit(int num)
{
	int d,c=0;
	while(num!=0)
	{
		d=num%10;
		num=num/10;
		c++;
	}
	return c;//2
}
int main()
{
	int i,n,arr[100],k,c=0;
	printf("Size of array(n): ");
	scanf("%d", &n);
	printf("How many digited numbers do you wanna know? ");
	scanf("%d", &k);
	for(i=0;i<n;i++)
	{
		printf("Enter array element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(k==countdigit(arr[i]))
		{
			c++;
		}
	}
	printf("The number of %d digited numbers are:\n");
	printf("%d", c);
}