#include <stdio.h>
int main()
{
	int time;
	char chance;
	X:printf("What time is it (in hours)? ");
	scanf("%d", &time);
	if(time==0)
	{
		printf("Boo! It's Midnight..");
	}
	else if(time>=1&&time<=5)
	{
		printf("Good Morning!");
	}
	else if(time>=6&&time<7)
	{
		printf("Time to Workout");
	}
	else if(time>=7&&time<8)
	{
		printf("Fresh Up");
	}
	else if(time>=8&&time<12)
	{
		printf("Please have your Breakfast");
	}
	else if(time>=12&&time<=15)
	{
		printf("Please have your Lunch");
	}
	else if(time>=16&&time<=18)
	{
		printf("It's your snacks time");
	}
	else if(time>=19&&time<=21)
	{
		printf("Please eat your Dinner");
	}
	else if(time>=22&&time<=24)
	{
		printf("Sleep fast and Good Night");
	}
	else if(time>24)
	{
		printf("The Time mentioned is not 24 hours.. Do you want another chance(Y/N)?");
		scanf(" %c", &chance);
		if(chance == 'Y' || chance == 'y')
		{
			goto X;
		}
		else if(chance == 'N' || chance =='n')
		{
			printf("Have a Great Day");
		}
	}
	return 0;
}
