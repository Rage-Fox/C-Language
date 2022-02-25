#include<stdio.h>
struct Student
{
	int eamcet;
	char rollno[10];
	float per;
};
typedef struct Student std;
void fun(std *s,int n)//s catch address automatically(s1).. but pointer stores arrays of structures
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d %s %f\n",s[i].eamcet,s[i].rollno,s[i].per);
	}
}
void main()
{
	std s1[100];
	int n,i;
	printf("Enter:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i].eamcet);//using dot we can access structure variables
		scanf(" %s",&s1[i].rollno);
		scanf(" %f",&s1[i].per);
	}
	fun(s1,n);//passing address of s1
}