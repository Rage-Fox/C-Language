#include<stdio.h>
int main()
{
	int a,b,res=0,c,d;
	printf("Enter value of a: ");
	scanf("%d", &a); //56
	printf("Enter value of b: ");
	scanf("%d", &b); //45
	c=a;
	d=b;
	a=abs(a); //these only changes a,b values but notvalues of c,d because they are preprogrammed before this condition
	b=abs(b);
	while(a>0) //56>0 28>0 14>0 7>0 3>0 1>0 (0!>0 exits while loop)
	{
		if(!(a%2==0)) //if(a%2) here a%2 is 1 then it is true
		{
			res=res+b; /*you can write it as res+=b;
						res=0+360+720+1400=2520*/
		}
		a=a/2; //28 14 7 3 1 0
		b=b*2; //90 180 360 720 1440
	} //while loop ends
	if((c<0&&d>=0)||(c>=0&&d<0)) // c negative d positive (or) c positive d negative
	{
		res = -res;
	}
	printf("The value of a*b in Russian Peasant Multiplication Method is %d.", res);
}
