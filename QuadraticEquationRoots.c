#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2;
	printf("Enter values of a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-(4*a*c);
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("Roots are real and not equal: %d, %d",r1,r2);
	}
	else if(d==0)
	{
		r1=-b/(2*a);
		printf("Roots are real and equal: %d, %d",r1,r1);
	}
	else
	{
		printf("Roots are Imaginary");
	}
}