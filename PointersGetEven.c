#include<stdio.h>
int * geteven(int *arr,int *n)
{
	int i,j=0;
	static int even[100];
	for(i=0;i<*n;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i]; //even array has the even numbers stored in it irrespective of the variable j
			j++;
		}
	}
	*n=j; //j acts as an array size
	return even;
}
int main()
{
	int arr[100],i,n,*even;
	printf("Mention how many numbers do you want to enter: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d (Maximum value is 100): ",i+1);
		scanf("%d", &arr[i]);
	}
	even=geteven(arr,&n);//5
	printf("The even numbers are: ");
	for(i=0;i<n;i++)//2
	{
		printf("%d ",even[i]);//irrespective of variable we are only accessing the values in that array's address
	}
}