#include<stdio.h>
void main()
{
    int i;
    for(i = 10; i > 0; i--)
    {
        if(i == 5)
        {
            goto khyati;
        }
        printf("\n%d",i);
    }
    khyati:
        printf("\nThis is goto statement.........");
}