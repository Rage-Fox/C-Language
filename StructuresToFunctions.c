#include<stdio.h>
struct Student
{
	int eamcet;
	char rollno[10];
	float per;
};
typedef struct Student std;
void fun(std s)//s catch address automatically(s1).. but pointer stores arrays of structures
{
	printf("%d %s %f",s.eamcet,s.rollno,s.per);
}
void main()
{
	std s1;// here s1 is of type struct student and s1 can also be called as object
	printf("Enter:\n");
	scanf("%d",&s1.eamcet);//using dot we can access structure variables
	scanf(" %s",&s1.rollno);
	scanf(" %f",&s1.per);
	fun(s1);//passing address of s1
}