#include<stdio.h>
int * count(int *arr, int n)
{
	int i,k;
	static int res[100];
	for(i=0;i<n;i++)
	{
		k=arr[i]+arr[i+1];
		res[i]=k;
	}
	return res;
}
int main()
{
	int i,n,arr[100],*res;
	printf("Enter size(n): ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	res=count(arr,n);
	for(i=0;i<n-1;i++)
	{
		printf("%d ", res[i]);
	}
}