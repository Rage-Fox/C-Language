#include <stdio.h>
int main()
{
	int p;
	float t,r,simple;
	printf("Principle:");
	scanf("%d", &p);
	printf("Time(in years):");
	scanf("%f", &t);
	printf("Rate of Interest:");
	scanf("%f", &r);
	simple = (p*t*r)/100;
	printf("The Simple Interest is %f", simple);
	return 0;
}
