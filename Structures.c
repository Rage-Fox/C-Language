#include<stdio.h>
struct Student//structure syntax
{
	int eamcet;
	char rollno[10];
	float per;
};//semicolon is compulsory
typedef struct Student std;//using alias name
void main()
{
	std s1;// here s1 is of type struct student and s1 can also be called as object
	printf("Enter:\n");
	scanf("%d",&s1.eamcet);//using dot we can access structure variables
	scanf(" %s",&s1.rollno);
	scanf("%f",&s1.per);
	printf("The entered data is: ");
	printf("%d %s %f",s1.eamcet,s1.rollno,s1.per);
	printf("\n%d", sizeof(s1));
}