#include<stdio.h>
int count(int *arr,int n,int *res)
{
	int i,c=0;
	for(i=0;i<n-1;i++)
	if(arr[i-1]%2 && arr[i+1]%2)//A chosen number is in between odd numbers then the c count will increase by one 
	{
		res[c]=arr[i];
		c++;
	}
	return c;
}
int main()
{
	int i,n,arr[100],c,res[100];
	printf("Enter the size(n): ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter score %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	c=count(arr,n,res);
	for(i=0;i<c;i++)
	{
		printf("%d ",res[i]);
	}
	printf("\n%d", c);
}