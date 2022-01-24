#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100],*str3;//pointer holds value at that address
	int n;
	printf("Enter str1: ");
	scanf("%[^\n]s", &str1);
	printf("Enter str2: ");
	scanf(" %[^\n]s", &str2);//give space in scanf when reading another string
	str3=str2;//writing srt2 in str3 when pointer is there for str3 because whole rewriting of a string is impossible unless a pointer is applied
	//str2 means address.. and that address equals str3 so when str3 reverses for that same address, str2 also reverses because both has same addresses
	printf("%s %s\n", str1, str2);
	printf("%d %d\n", strlen(str1), strlen(str2));//string length
	strcpy(str3,str1);//copies 1st string in 2nd string
	printf("%s %s\n", str1, str3);
	strcat(str3,str1);//string concatenation
	printf("%s %s\n", str1, str3);
	strrev(str3);//reverses string and use only one time no like (str1,str2)
	printf("%s\n", str3);
	printf("%s %s\n", str1, str2);
	n=strcmp(str1,str2);//returns only values 1,0,-1 and it is true when shows 0 and stops when shows 1 or -1 and doesn't even check the next character in that string
	printf("%d\n", n);//subtracts ascii value for each character
}