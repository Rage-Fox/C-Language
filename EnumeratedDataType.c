#include<stdio.h>
enum{a,b,c=100,d,jan=1,feb,mar,apr,may,jun,sun=0,mon,tue,wed,thu,fri,sat};//automatically values assigned from 0
int main()
{
	printf("%d %d %d %d",a,b,c,d);
	printf("\n%d %d %d %d %d %d",jan,feb,mar,apr,may,jun);
	printf("\n%d %d %d %d %d %d %d",sun,mon,tue,wed,thu,fri,sat);
}