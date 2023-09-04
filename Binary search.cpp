/*Q1)// search at which binary is there (OUTPUT: Enter the element in an array A
10
20
30
40
50
60
70
80
90
99

 Enter the element you want to search = 60
60 found at location = 5)

#include<stdio.h>
int main()
{
	int A[10];
	int i;
	printf("Enter the element in an array A\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	int S;
	printf("\n Enter the element you want to search = ");
	scanf("%d",&S);
	int Low = 0;
	int High = 9;
	int mid = (Low+High)/2;
	while(Low<=High)
	{
		if(S > A[mid])
		{
			Low = mid + 1;
		}
		else if(S < A[mid])
		{
			High = mid - 1;
		}
		else
		{
			printf("%d found at location = %d",S,mid);
			break;
		}
		mid = (Low + High)/2;
	}
	if(Low > High)
	{
		printf("%d not found in array A",S);
	}
}*/

/*//Q2)wap that sorts the elements in ascending order by bubble sorts? (OUTPUT : )
#include<stdio.h>
int main()
{
	int t;
	int A[10] = {56,38,43,17,8,58,37,23,19,39};
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(A[j] > A[j+1])
			{
				t = A[j];
				A[j] = A[j+1];
				A[j+1] = t;
			}
		}
	}
	printf("\n Sorted elements ");
	for(i=0;i<10;i++)
	{
		printf("%d",A[i]);
		printf("\t");
	}
}*/

/*//Q3)wap that inserts the new element in the array? ()
#include<stdio.h>
int main() 
{
	int A[100], P, n, V, i;
	printf("Enter the size of an element = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\n Enter the position where you want to insert new element = ");
	scanf("%d",&P);
	printf("\n Enter the new value = ");
	scanf("%d",&V);
	for(i=n-1;i>=P-1;i--)
	{
		A[i+1] = A[i];
	}
	A[P-1] = V;
	n++;
	printf("\n New array elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
		printf("\t");
	}
}*/

/*//to delete
#include<stdio.h>
int main()
{
	int A[100],p,n,v,i;
	printf("enter the size of an element=");
	printf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",A[i]);
	}
	printf("\n enter the position where you want to delete element");
	scanf("%d",&p);
	for(i=n-1;i>=p-1;i--)
	{
	A[i]=A[i+1];
	}
	n=n-1;
	printf("\n new array element elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
		printf("\t");
	}
}*/

/*//wap that deletes the elements from the given position?
#include<stdio.h>
int main()
{
	int A[100], n ,p,i;
	printf("\n Enter the size of an array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\n Enter the position from where you want to delete = ");
	scanf("%d",&p);
	if(p>=n+1)
	{
		printf("\n Not possible!");
	}
	else
	{
		for(i=p-1;i<n-1;i++)
		{
			A[i] = A[i+1];
		}
	}
	n = n-1;
	printf("\n Current elements are ");
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
		printf("\t");
	}
}*/
