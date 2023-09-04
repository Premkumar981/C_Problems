#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr;
    int n,i;
    printf("\nEnter the value of n = ");
    scanf("%d",&n);
    ptr = (int *) calloc(n,sizeof(int));
    printf("\nInsert elements one by one\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",(ptr + i));
    }
    int a=0,b=0;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)%2==0)
        {
            a=a+1;
        }
        else
        {
            b=b+1;
        }
    }
    printf("\nNo of even values = %d",a);
    printf("\n No of odd values = %d",b);
    free(ptr);
    
}
