#include<stdio.h>
void main()
{
	int a;
	printf("Enter any no:");
	scanf("%d",&a);
	(a>=10) ? ((a>10)?printf("A is grater than 10."):printf("A is equle to 10.")) : (printf("A is less than 10."));
}
