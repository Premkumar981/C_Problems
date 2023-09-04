#include<stdio.h>
#include<stdlib.h>

// use of malloc : 
// malloc stands for "memory allocation";
// ptr = (type *)malloc(block-size);
// ptr = (int*)maaloc(sizeof(int));
// this will allocate the single block;
// ptr = (int *)malloc(5 * sizeof(int));
// free(ptr);

int main()
{
    // This is a sample programe of malloc;

    int *ptr;

    int n;

    printf("Enter the Number of Elements : ");
    scanf("%d",&n);

    ptr = (int *)malloc(n * sizeof(int));

    // printf("%d",ptr); // this is used print the address of the ptr;

    for(int i = 0;i<n;i++)
    {
        ptr[i] = i + 1;
    }
    
    printf("Elements inserted in memory are : ");
    
    for(int i = 0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }

    free(ptr);
    
    return 0;
}