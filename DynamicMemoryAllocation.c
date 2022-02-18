#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,i,m;
	printf("Enter the value of the size of array n: ");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	//arr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("The value of %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	//free(arr); makes erase memoy for array
	printf("\nEnter how many numbers to add for array : ");
	scanf("%d",&m);
	arr=(int *)realloc(arr,(n+m)*sizeof(int));
	for(;i<n+m;i++)
	{
		printf("The value of %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n+m;i++)
	{
		printf("%d ", arr[i]);
	}
}