#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr;
    int n;

    printf("Enter the Size of the elements : ");
    scanf("%d",&n);

    ptr = (int *) malloc(n * sizeof(int));

    printf("Insert Elements onr by one : ");

    for(int i = 0;i<n;i++)
    {
        scanf("%d",(ptr + i));
    }

    int sum = 0;

    for(int i = 0;i<n;i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("The total sum is : %d\n",sum);

    return 0;
}