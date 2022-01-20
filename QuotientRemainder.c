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
	int i,n,arr[100];
	printf("Size of array(n): ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter array element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		arr[i]=countdigit(arr[i]);
	}
	printf("Counts for each entered element are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n", arr[i]);
	}
}