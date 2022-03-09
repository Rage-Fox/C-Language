#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp1;//file pointer:stores address of a file handler
	char ch,*str,str1[10000];
	int i=0;
	fp=fopen("data.txt","r+");//data.txt is notepad file in the c language folder..
	fp1=fopen("data1.txt","w");
	//syntax: fopen(filename,mode)
	//no file found then shows 0 which is a null pointer;
	if(fp==NULL)
	{
		printf("File Not Found");
	}
	else
	{
		//content in a file is always a string
		//str=(char *)malloc(1*sizeof(char));//dynamically allocating a string only in file handling functions
		//ch=fgetc(fp);//fgetc starts at cursor position of that file content
		/*while(ch!=EOF)//end of file(\n) also known as EOF at end of data which is invisible
		{
			//printf("%c",ch);
			//str[i]=ch;
			//i++;
			//str=(char *)realloc(str,(i+1)*sizeof(char));//increasing size of that same string
			ch=fgetc(fp);
		}*/
		//str[i]='\0';//making last character as enter because it can or may print garbage values
		//printf("%s",str);
		//fputs(str,fp1);//writes or copies str into fp1 or data1.txt file
		fseek(fp,0,SEEK_END);//makes cursor move to end 0 position i.e; last position from start
		printf("File Found\n");
		scanf("%[^\n]s",str1);
		fputs(str1,fp);
	}
	fclose(fp);//for closing opened files                                                              
	fclose(fp1);
	//r+ cannot create new files but just reading and writing purpose for existing files
	/*modes of file opening
	read(r)(r+)
	write(w)(w+)
	append(a)(a+)
	*/
}