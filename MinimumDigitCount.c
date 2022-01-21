#include<stdio.h>
int mindigitcount(int num)
{
	int d,c=0;
	while(num!=0)
	{
		d=num%10;
		num=num/10;
		c++;
	}
	return c;
}
int main()
{
	int i,n,arr[100],c=0,k=0,mdc=100;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)//12 23 431 345 123
	{
		k=mindigitcount(arr[i]);//k=2 2 3 3 3
		if(mdc>k)//100>2 2>2 2>3 3>3 3>3
		{
			mdc=k;//2 2 2 2 2
			c=1;//1
		}
		else if(mdc==k)
		{
			c++;//2
		}
	}
	printf("Minimum digits are %d\n", mdc);
	printf("Number of minimum digited numbers are %d", c);
}