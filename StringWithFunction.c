#include<stdio.h>
int stringlen(char *str1)
{
	int i,c=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=' ')//without counting spaces
		{
			c++;
		}
	}
	return c;
}
void stringcopy(char *str2, char *str1)
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';//makes last character as enter and quits out garbage value
}
void stringconcat(char *str1, char *str2)
{
	int len1,len2,i,j;
	len1=stringlen(str1);
	len2=stringlen(str2);
	j=len1;
	str1[j]=' ';//gives space between two strings
	j++;
	for(i=0;i<len2;i++)
	{
		str1[j]=str2[i];
		j++;
	}
	str1[j]='\0';
}
int stringcompare(char *str1, char *str2)
{
	int i,len1,len2;
	len1=stringlen(str1);
	len2=stringlen(str2);
	if(len1!=len2)
	{
		return 0;
	}
	for(i=0;i<len1;i++)
	{
		if(str1[i]!=str2[i])//checks every character is equal or not
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int len,n;
	char str1[100],str2[100];
	printf("Enter a string 1: ");
	scanf("%[^\n]s", &str1);
	printf("Enter a string 2: ");
	scanf(" %[^\n]s", &str2);
	len=stringlen(str1);//return type int, func call char
	stringcopy(str2,str1);
	stringconcat(str1,str2);
	printf("String length 1 is %d\n", len);
	printf("String 2 is %s\n", str2);
	printf("String Concatenation is %s", str1);
	n=stringcompare(str1,str2);
	if(n==1)
	{
		printf("\nEqual");
	}
	else
	{
		printf("\nNot Equal");
	}
}