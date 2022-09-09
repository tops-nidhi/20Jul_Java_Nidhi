#include<stdio.h>
void main()
{
    int no[5];
    int i;
    printf("Enter no:");
    for(i=0;i<5;i++)
    {
        printf("\nNo[%d]:",i);
        scanf("%d",&no[i]);
    }
    printf("\nNo is:");
    for(i=0;i<5;i++)
    {
        printf("\nNo[%d]:\t%d",i,no[i]);
    }
}
