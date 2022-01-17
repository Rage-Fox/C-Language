#include<stdio.h>
void findevenodd(int *arr,int n,int *even,int *odd,int *es,int *os)
{
	int i,j=0,k=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	*es=j;
	*os=k;
}
int main()
{
	int n,arr[100],i,even[100],es,odd[100],os;
	printf("Enter the size(n): ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	findevenodd(arr,n,even,odd,&es,&os);
	for(i=0;i<es;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\n");
	for(i=0;i<os;i++)
	{
		printf("%d ",odd[i]);
	}
}