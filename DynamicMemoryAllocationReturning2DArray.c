#include<stdio.h>
#include<stdlib.h>
void * fun(int **arr,int r, int c)
{
	int i,j,sum=0,*res;
	res=(int *)malloc(r*sizeof(int));
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum+=arr[i][j];
		}
		res[i]=sum;
	}
	return res;
}
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
	int *p=fun(arr,r,c);
	for(i=0;i<r;i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}