#include<stdio.h>
#include<stdlib.h>
struct Movie
{
	int id;
	char movie[10],singer[10],li[10];
	int loop;
};
typedef struct Movie std;
void fun(std *s,int n)
{
	int i,c=0,t=s[0].loop;
	for(i=0;i<n;i++)
	{
		printf("%d %s %s %s %d\n",s[i].id,s[i].movie,s[i].singer,s[i].li,s[i].loop);
		if(t<s[i+1].loop)
		{
			t=s[i+1].loop;
			c=i+1;
		}
	}
	printf("%s",s[c].movie);
}
char * identify(std *s,int n)
{
	
}
void main()
{
	std *s1;
	int n,i;
	char mn[10];
	printf("Enter: ");
	scanf("%d",&n);
	s1=(std *)malloc(n*sizeof(std));
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i].id);
		scanf(" %s",&s1[i].movie);
		scanf(" %s",&s1[i].singer);
		scanf(" %s",&s1[i].li);
		scanf("%d",&s1[i].loop);
	}
	printf("\n");
	fun(s1,n);
}
/*
5
1 aaa1 sss1 lll1 3
2 aaa2 sss2 lll2 10
3 aaa3 sss3 lll3 5
4 aaa4 sss4 lll4 6
5 aaa5 sss5 lll5 7 
*/