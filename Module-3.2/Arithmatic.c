#include<stdio.h>
void main()
{
    int a,b,mod;
    float ans;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    ans=a+b;
    printf("\nAddition is:%f",ans);
    ans=a-b;
    printf("\nSubstraction is:%f",ans);
    ans=a*b;
    printf("\nMultiplication is:%f",ans);
    ans=a/b;
    printf("\nDivision is:%f",ans);
    mod=a%b;
    printf("\nModulo is:%d",mod);
    a++;
    ++b;
    printf("\n%d,%d",a,b);
    --a;
    a--;
    --b;
    b--;
    printf("\n%d,%d",a,b);
}
