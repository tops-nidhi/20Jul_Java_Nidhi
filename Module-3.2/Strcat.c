#include<stdio.h>
#include<string.h>
void main()
{
    char fnm[20];
    char lnm[20];
    printf("Enter your First name:");
    scanf("%s",&fnm);
    printf("Enter your last name:");
    scanf("%s",&lnm);
    strcat(fnm,lnm);
    printf("Your full name is:%s",fnm);
}