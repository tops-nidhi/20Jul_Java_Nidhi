#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 no:");
    scanf("%d%d%d",&a,&b,&c);//15//10//55
    if(a>b)
    {
        if (c>a)
        {
            printf("%d is max.",c);
        }
        else
        {
            printf("%d is max",a);
        } 
    }
    else
    {
        if (c>b)
        {
            printf("%d is max.",c);
        }
        else
        {
            printf("%d ia max.",b);
        }
        
    }
}