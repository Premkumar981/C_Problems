#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the 'a' and 'b' value : ");
    scanf("%d %d",&a,&b);

    int *p1,*p2,*p3;

    p1 = &a;
    p2 = &b;

    p3 = &c; // this variable is used to sum of a + b;

    *p3= *p1 + *p2;

    printf("The sum of the two numbers using pointers is : %d\n",*p3);

    return 0;
}