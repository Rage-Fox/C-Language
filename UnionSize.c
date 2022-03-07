#include<stdio.h>
#include<stdlib.h>
union Student//same as structure but size changes
{
	int marks;//memory is always going to be maximum value 10(char)
	float per;//4
	char rollno[10];//4 4 4(2 converted to 4),maximum memory is divided with maximum size
};
typedef union Student STD;
int main()
{
	STD s1;
	printf("Enter: ");
	scanf("%d",&s1.marks);
	scanf("%f",&s1.per);
	scanf(" %s",&s1.rollno);
	printf("%d",sizeof(s1));
}