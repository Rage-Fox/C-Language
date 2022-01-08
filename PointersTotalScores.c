#include<stdio.h>
int findtotal(int *arr,int n)
{
	int i,total=0;
	for(i=0;i<n;i++)
	{
		total+=arr[i]; // you can also write it as total+=*(arr+i); arr+i adding addresses not locations
	}
	return total; //return has to be compulsory for returning this total value to below printf statement
}
int main()
{
	int arr[100],i,n,total;
	printf("Enter how many scores do you want to add: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter score %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	total=findtotal(arr,n); // integer address, integer value, returning a value
	printf("The total of %d scores is %d", n, total);
}