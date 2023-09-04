#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the Element size : ");
    scanf("%d",&n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter the elements one-by-one : ");

    for(int i = 0;i<n;i++)
    {
        scanf("%d",(ptr + i));
    }

    int max = *(ptr + 0);

    for(int i = 1;i<n;i++)
    {
        if(max < *(ptr + i))
        {
            max = *(ptr + i);
        }
    }

    printf("The maximum value is : %d\n",max);
}