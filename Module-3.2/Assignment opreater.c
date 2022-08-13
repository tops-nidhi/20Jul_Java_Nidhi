#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter any 2 no:");
	scanf("%d%d",&a,&b);
//	a+=b;
//	a*=b;
//	a-=b;
//	a/=b;
	a%=b;
//	a=b;
	printf("\nAfter value mod ans is:%d",a);
}
