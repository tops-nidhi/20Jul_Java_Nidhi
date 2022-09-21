#include<stdio.h>
int add()
{
    int a,b;
    printf("Enter 2 value:");
    scanf("%d%d",&a,&b);
    return a+b;
}
int main()
{
    // add();
    printf("%d",add());
}