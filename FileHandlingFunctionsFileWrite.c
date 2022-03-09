#include<stdio.h>
int main()
{
	FILE *fp;//file pointer:stores address of a file handler
	fp=fopen("data1.txt","w+");//data.txt is notepad file in the c language folder..
	//syntax: fopen(filename,mode)
	//no file found then shows 0 which is a null pointer;
	if(fp==NULL)
	{
		printf("File Not Found");
	}
	else
	{
		printf("File Found\n");//write mode always makes file created and prints file found
		//when we open any file that already exists,write mode deletes it and creates a new file..IMPORTANT
		char str[1000],ch;
		scanf("%[^\n]s",str);
		fputs(str,fp);//here comes the error.. in a+, after writing the cursor oves to last position and prints stuff after the cursor point which prints nothing
		rewind(fp);//makes cursor to first position of data
		ch=fgetc(fp);
		printf("%c",ch);
	}
	//w+ makes write and read at same time while working as w mode
}