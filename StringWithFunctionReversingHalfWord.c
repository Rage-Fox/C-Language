#include<stdio.h>
#include<string.h>
void stringreverse(char *str)
{
	char temp;
	int i=0,j,len;
	len=strlen(str);//sudhir
	j=len-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}
int main()
{
	int i;
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s", &str);
	stringreverse(str);
	printf("%s", str);
}