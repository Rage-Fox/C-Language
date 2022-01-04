#include<stdio.h>
int main()
{
	int s1, s2, s3, s4, s5, total;
	float per;
	char chance;
	X:printf("Enter marks for the following 5 subjects (each subject has a total of 100 marks)");
	printf("\nEnter marks for Subject 1: ");
	scanf("%d", &s1);
	printf("Enter marks for Subject 2: ");
	scanf("%d", &s2);
	printf("Enter marks for Subject 3: ");
	scanf("%d", &s3);
	printf("Enter marks for Subject 4: ");
	scanf("%d", &s4);
	printf("Enter marks for Subject 5: ");
	scanf("%d", &s5);
	total = s1+s2+s3+s4+s5;
	per = (total*100)/500.0;
	if(s1<0||s1>100||s2<0||s2>100||s3<0||s3>100||s4<0||s4>100||s5<0||s5>100||s5<0||s5>100)
	{
		printf("Invalid Marks\n");
		printf("Do you need another chance (Y/N)? ");
		scanf(" %c", &chance);
		if(chance == 'Y' || chance == 'y')
		{
			goto X;
		}
		else if(chance == 'N' || chance =='n')
		{
			printf("Thank You for using our services");
		}
	}
	else 
	{
		printf("\nYour total is : %d", total);
		printf("\nThe Pass marks for each subject is 40");
		if(s1>=40&&s2>=40&&s3>=40&&s4>=40&&s5>=40)
		{
			printf("\nYou are Passed.\nCongratulations!! :)");
			printf("\nYour Percentage is : %.2f", per);
			if(per>=92.0 && per<=100.0) {
				printf("\nYou got A grade");
			}
			else if(per<92.0 && per>=80.0) {
				printf("\nYou got B grade");
			}
			else if(per<80.0 && per>=65.0) {
				printf("\nYou got C grade");
			}
			else if(per<65.0 && per>=50.0) {
				printf("\nYou got D grade");
			}
			else if(per<50.0 && per>=40.0) {
				printf("\nYou got E grade");
			}
		}
		else
		{
			printf("\nYou Failed in this examination.\nBetter luck next time :(");
			printf("\nYour Grade is not given as you failed in the examination");
		}
	}
}
