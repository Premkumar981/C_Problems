                                			//Unformatted input/output functions
/*#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character\n");
	ch=getchar();
	printf("\nEntered character is = %c",ch);
}*/

/*#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character\n");
	ch=getchar();
	printf("Entered character is\n");
	putchar(ch);
}*/

/*//reads only first name
#include<stdio.h>
int main()
{
	char ch[100];
	printf("Enter the string\n");
	scanf("%s",&ch);
	printf("\nstring ch=%s",ch);
}*/

/*//reads full name
#include<stdio.h>
int main()
{
	char ch[100];
	printf("Enter the string\n");
	gets(ch);
	printf("\nString ch = %s",ch);
}*/

/*//gets
#include<stdio.h>
int main()
{
	char ch[100];
	printf("Enter the string\n");
	gets(ch);
	printf("\nstring ch = ");
	puts(ch);
}*/

/*//prints everything you want
#include<stdio.h>
int main()
{
	char name[20],reg[10],section[6];
	printf("Enter name\n");
	gets(name);
	printf("\n Enter reg \n");
	gets(reg);
	printf("\n Enter section\n");
	scanf("%s",&section);
	printf("Name = ");
	puts(name);
	printf("\n Reg = ");
	puts(reg);
	printf("\nsection = ");
	puts(section);
}*/

/*//factorial
#include<stdio.h>
int factorial(int n);

int main()
{
    int n;
    
    printf("Enter the N value here : ");
    scanf("%d",&n);

    int res = factorial(n);

    printf("The factorial of %d! is : %d\n",n,res);
}

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}*/

/*//call by reference
#include<stdio.h>
int show(int x);
int main()
{
	int n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	int r = show(n);
	printf("\nNew value = %d",r);
	}
	int show(int x)
	{
		x=x+5;
		return x*2;
	}*/

/*#include<stdio.h>
int show(int * x);
int main()
{
	int n;
	printf("Enter the value of n =");
	scanf("%d",&n);
	int r=show(&n);   //call by reference
	printf("\n New value = %d",r);
}
int show(int*x)
{
	printf("\nAddress of n = %d",x);
	printf("\n Value of n = %d",*x);
	*x=*x+20;
	return *x;
}*/

/*#include<stdio.h>
int main()
{
	int n;
	n=100;
	printf("\nAddress of n = %d",&n);
	printf("\nValue of n = %d",n);
	int * p;
	p=&n;
	printf("\nAddress of n = %d",p);
	printf("\nValue of n = %d",*p);
}*/
