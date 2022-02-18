#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **arr,r,c,i,j;
	printf("Enter row size: ");
	scanf("%d",&r);
	printf("Enter column size: ");
	scanf("%d",&c);
	arr=(int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++)
	{
		arr[i]=(int *)malloc(c*sizeof(int));
	}
	printf("Enter elements one by one:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}