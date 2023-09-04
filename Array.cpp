/*//Q1)wap that declare or decide 
#include<stdio.h>
int main()
{
	int i;
	int A[10] = {11,12,13,14,15,16,17,18,19,20};
	printf("Elements in an array are \n");
	for(i=0;i<10;i++)
	{
		printf("%d",A[i]);
		printf("\n");
	}
} */
                      //OR
/*#include<stdio.h>
int main()
{
	int A[10];
	printf("Enter the elements of an array A \n");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Elements in an array are \n");
	for(i=0;i<10;i++)
	{
		printf("%d",A[i]);
		printf("\n");
	}
} */

/*//Q2)wap in c that calculate all the sum of elements in array?
#include<stdio.h>
int main()
{
	int A[10];
	printf("Enter the elements of an array A \n");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	int SUM=0;
	for(i=0;i<10;i++)
	{
		SUM=SUM+A[i];
	}
	printf("\n Total SUM=%d",SUM);
}*/

/*//Q3)wap that check and print the max and min value in an array A having size 15?
#include<stdio.h>
int main()
{
	int A[15];
	printf("Enter the elements of an array A\n");
	int i;
	for(i=0;i<15;i++)
	{
		scanf("%d",&A[i]);
	}
	int MX=A[0];
	for(i=0;i<15;i++)
	{
		if(MX<A[i])
		{
			MX=A[i];
		}
	}
	int MN=A[0];
	for(i=0;i<15;i++)
	{
		if(MN>A[i])
		{
			MN=A[i];
		}
	}
	printf("\nMaximum=%d",MX);
	printf("\nMinimum=%d",MN);
} */

//wap in c that finds the specified elements in an array and print its index location if the element is found?
/*#include<stdio.h>
int main()
{
	int A[15];
	printf("Enter the elements of an array A \n");
	int i;
	for(i=0;i<15;i++)
	{
		scanf("%d",&A[i]);
	}
	int S;
	printf("\n Enter the element you want to search=");
	scanf("%d",&S);
	int result=0;
	for(i=0;i<15;i++)
	{
		if(S==A[i])
		{
			printf("%d found at index=%d",S,i);
			result=1;
			break;
		}
	}
	if(result==0)
	{
		printf("Element not found");
	}
}*/

/*//wap that calculates total no.of occurances of an given element A?
#include<stdio.h>
int main()
{
	int A[15];
	printf("Enter the elements of an array A \n");
	int i;
	for(i=0;i<15;i++)
	{
		scanf("%d",&A[i]);
	}
	int S;
	int count=0;
	int result=0;
	printf("\n Enter the element to count its total no.of occurances=");
	scanf("%d",&S);
	for(i=0;i<15;i++)
	{
		if(S==A[i])
		{
			count++;
			result=1;
		}
	}
	if(result==0)
	{
		printf("\n Element not found!");
	}
	else
	{
		printf("%d is present %d times in an array",S,count);
	}
}*/

/*//string is collection of characters are array ofcharacters?
#include<stdio.h>
int main()
{
	char name[15];
	printf("Enter your name without space = ");
	scanf("%S",&name);
	printf("\n You have entered your name as %S",name);
}*/
					//or
/*#include<stdio.h>
int main()
{
	char name[15];
	printf("Enter your name with space = ");
	scanf("%[^\n]S",&name);  //gets(name);
	printf("\n You have entered your name as v");
	puts(name);
}*/

//wap in c that converts the name into lower case to upper case?
/*#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter your full name \n");
	gets(name);
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		name[i]=name[i]-32;
	}
	printf("\n Name in upper case is ");
	printf("%s",name);
}*/

//wap that counts total no.of upper,lower,and digits in the strings?

