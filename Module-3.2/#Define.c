#include<stdio.h>
#define pi 3.14
void main()
{
    int r;
    float ans;
    printf("Enter radious of the circle:");
    scanf("%d",&r);
    ans=pi*r*r;
    printf("\nArea of the circle is:%f",ans);
}