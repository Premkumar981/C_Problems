#include<stdio.h>
int main()
{
    int a=10;
    float b=10.5;
    void * p;
    p=&a;
    printf("\nAddress of a = %d",p);
    printf("\nValue of a = %d",*(int *) p);
    p=&b;
    printf("\nAddress of b = %d",p);
    printf("\nValue of b = %.1f",*(float *)p);
}