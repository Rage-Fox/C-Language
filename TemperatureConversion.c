#include<stdio.h>
int main()
{
	int n;
	float f,c;
	char ch;
	X:printf("Convert:\n1)Fahrenheit to Celsius\t2)Celsius to Fahrenheit\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Enter Fahrenheit temperature: ");
		scanf("%f", &f);
		c=(f-32)*(5.0/9);
		printf("The Celsius temperature is: %.2f", c);
	}
	else if(n==2)
	{
		printf("Enter Celsius temperature: ");
		scanf("%f", &c);
		f=(c*(9.0/5))+32;
		printf("The Fahrenheit temperature is: %.2f", f);
	}
	else
	{
		Y:printf("Invalid\nDo you need another chance(Y/N)? ");
		scanf("%c",&ch);
		if(ch=='Y'||ch=='y')
		{
			goto X;
		}
		else if(ch=='N'||ch=='n')
		{
			printf("Thank you");
			return 0;
		}
		else
		{
			goto Y;
		}
	}
}