#include<stdio.h>
void main()
{
    int a=90;//static value
    int *ptr;//pointer variable //you can give any identifier(name) place of ptr
    ptr=&a;//assign address of the a to pointer

    // printf("Addres of the no is:%d",ptr);
    // ptr++;
    // printf("\nAfter increment of the address is:%d",ptr);
    // printf("Value of address is:%d",*ptr);
    //*ptr Min pointer of the pointer 
    *ptr=13;
    printf("Value of a is:%d",a);
}