#include<stdio.h>
int main()
{
    int no[5][5];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter no no[%d][%d]:",i,j);
            scanf("%d",&no[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",no[i][j]);
        }
        printf("\n");
    }
    return 0;
}
