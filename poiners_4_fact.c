#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the value of n = ");
    scanf("%d",&n);
    int * p = &n;
    int fact = 1;
    int i;
    for(i=1;i<=*p;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is = %d",*p,fact);
}