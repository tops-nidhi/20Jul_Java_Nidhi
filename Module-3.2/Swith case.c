#include<stdio.h>
void main()
{
    int no1,no2;
    int ch,ch1;
    printf("Enter 2 no:");
    scanf("%d%d",&no1,&no2);
    printf("\n1.add\n2.mul\n3.sub\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf("\nEnter your choice:");
        scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:
                    printf("\nThis is Nested Switch case 1.");
                    break;
                case 2:
                    printf("\nThis is Nested switch case 2.");
                    break;
            }
             printf("\nAdd is:%d",no1+no2); 
            break;
        case 2:
            printf("\nMul is:%d",no1*no2);
            break;
        case 3:
            printf("\nSub is:%d",no1-no2);
            break;
    
        default:
            printf("Enter valid choice.......");
            break;
    }
}
