#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int eamcet;
	char rollno[10];
	float per;
};
typedef struct Student std;
void fun(std *s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d %s %f\n",s[i].eamcet,s[i].rollno,s[i].per);
	}
}
void main()
{
	std *s1;
	int n,i;
	printf("Enter:\n");
	scanf("%d",&n);
	s1=(std *)malloc(n*sizeof(std));
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i].eamcet);
		scanf(" %s",&s1[i].rollno);
		scanf(" %f",&s1[i].per);
	}
	fun(s1,n);
}