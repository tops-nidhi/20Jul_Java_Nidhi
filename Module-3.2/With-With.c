#include<stdio.h>
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    int a, b;
    printf("Enter 2 value to substract:");
    scanf("%d%d",&a,&b);
    printf("%d",sub(a,b));
}