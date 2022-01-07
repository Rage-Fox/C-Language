#include<stdio.h>
void fun(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arr[i] = arr[i]+1;
	}
}
int main()
{
	int arr[100],i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of arr[i]\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	fun(arr,n);
	for(i=0;i<n;i++)
	{
	printf("%d ", arr[i]);// arr address, *arr value only first values
	}
}