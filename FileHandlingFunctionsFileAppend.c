#include<stdio.h>
int main()
{
	FILE *fp;//file pointer:stores address of a file handler
	fp=fopen("data1.txt","a+");//data.txt is notepad file in the c language folder..
	//syntax: fopen(filename,mode)
	//no file found then shows 0 which is a null pointer;
	if(fp==NULL)
	{
		printf("File Not Found");
	}
	else
	{
		printf("File Found\n");//append mode always makes file created and prints file found
		//when we open any file that already exists,append mode doesn't deletes it, the content is always the same..IMPORTANT
		char str[1000],ch;
		scanf("%[^\n]s",str);
		fputs(str,fp);//here comes the error.. in a+, after writing the cursor oves to last position and prints stuff after the cursor point which prints nothing
		rewind(fp);//makes cursor to first position of data
		ch=fgetc(fp);
		printf("%c",ch);
	}
	//a+ makes read and append(write) the existing data or else creates unexisted file
}