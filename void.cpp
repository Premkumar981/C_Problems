/*//Q1)write a function having name swapping with return type void are used to change the two values of variables? (Output: Swaps the numbers)
#include<stdio.h>
int main()
{
	void swapping(int x,int y);
	int a,b;   //actual parameters
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("\n Before swapping");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	swapping(a,b);
}
void swapping(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("\n After swapping");
	printf("\n a=%d",x);
	printf("\n b=%d",y);
}   */

/*
//Q2)write a function that check and print the prime palindrome number?(Output
#include<stdio.h>
int check(int n);
int main()
{
	int x;
	printf("Enter the number=");
	scanf("%d",&x);
	int r=check(x);
	if(r==1)
	{
		printf("%d is prime palindrome",x);
	}
	else
	{
		printf("%d is not prime palindrome",x);
	}
}
int check(int n)
{
	int d=0;
	int i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			d++;
		}
	}
	int p;
	int rev=0;
	int rem;
	p=n;
	if(d==2)
	{
		while(p>0)
		{
			rem=p%10;
			rev=rev*10+rem;
			p=p/10;
		}
		if(p==n)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}  */

/*
//Q3)write a function that accept three input numbers l,r,k and return the total count when the k is divisble by l and r? (Output: when we press 82,92,4 we get 3)
#include<stdio.h>
int count(int l, int r, int k);
int main()
{
	int a,b,c;
	printf("\n Enter the values of a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	int p = count(a,b,c);
	printf("Total count is = %d",p);
}
int count(int l, int r, int k)
{
	int i;
	int cnt=0;
	for(i=l;i<=r;i++)
	{
		if(i%k==0)
		{
			cnt++;
		}
	}
	return cnt;
}*/

                                                      //Recurssion
/*
//Function with return type but no arguments?
#include<stdio.h>
int check();
int main()
{
	int r=check();
	printf("Number is divisible by 3 and 5 %d times",r);
}
int check()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	int c=0;
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			c++;
		}
	}
	return c;
}*/

//Function with no return and no arguments?             (need to finish)

/*
//example for demonstration of recurssion?  (Output: prints the factorial of entered number)
#include<stdio.h> 
long int factorial(int n); 
int main() 
{ 
	int x; 
	printf("Enter the number for factorial="); 
	scanf("%d",&x); 
	long int r=factorial(x); 
	printf("\n Factorial=%ld",r); 
} 
long int factorial(int n) 
{ 
	if(n==1) 
	return 1; 
	else 
	return n*factorial(n-1); 
}*/

//example of sum problem for recursion?
#include<stdio.h>
int sum(int n);
int main()
{
	int x;
	printf("Enter the number = ");
	scanf("%d",&x);
	int r = sum(x);
	printf("\nTotal sum=%d",r);
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum(n-1);
	}
}
