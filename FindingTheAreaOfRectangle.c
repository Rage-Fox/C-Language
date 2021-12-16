#include <stdio.h>
int main()
{
	int l, b, area, perimeter;
	printf("Enter the value of Length: ");
	scanf("%d", &l);
	printf("Enter the value of Breadth :");
	scanf("%d", &b);
	area = l*b;
	perimeter = 2*(l+b);
	printf("The Area is %d.\n", area);
	printf("The Perimeter is %d.\n", perimeter);
	return 0;
}
