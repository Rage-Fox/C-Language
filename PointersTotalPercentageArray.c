#include<stdio.h>
//make data as a global variable as float data[2]
float * find_total_per(int *arr,int n) //for returning integer address we have to write "returntype * "
{
	int i,total=0;
	float per;
	static float data[2];//static makes variable global
	for(i=0;i<n;i++)
	{
		total=total+arr[i]; // you can also write it as total+=*(arr+i); arr+i adding addresses not locations
	}
	data[0]=total;
	per=total*100/500.0;
	data[1]=per;
	return data;//cannot return two or more values so we have to use array for returning multiple values
}
int main()
{
	int arr[100],i,n;
	float * data;
	printf("Mention how many scores do you want to enter: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter score %d (Maximum value is 100): ", i+1);
		scanf("%d", &arr[i]);
	}
	data=find_total_per(arr,n); //integer address, integer value, returning a value
	printf("The total of %d scores is %.f and the percentage is %.2f", n, data[0], data[1]);
}