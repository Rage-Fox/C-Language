#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,dc=0,temp,s=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		dc++;
	}
	n=temp;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		s=s+pow(d,dc);
	}
	if(temp==s)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not an Armstrong Number");
	}
}