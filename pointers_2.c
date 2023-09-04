#include<stdio.h>
int main()
{
    int a=1000;
    float b=100.25;
    char c='M';
    int *p1;
    float *p2;
    char *p3;
    p1=&a;
    p2=&b;
    p3=&c;
    printf("\nAddress of a = %d",p1);
    printf("\nValue of a = %d",*p1);
    printf("\nAddress of b = %d",p2);
    printf("\nValue of b = %.2f",*p2);
}