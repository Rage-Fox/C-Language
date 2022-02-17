#include<stdio.h>
int main()
{
	int arr[100][100],r,c,i,j;
	printf("Enter row size: ");
	scanf("%d",&r);
	printf("Enter column size: ");
	scanf("%d",&c);
	printf("Enter elements one by one:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The entered elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}