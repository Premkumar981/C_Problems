/*//Q1)Wap that prints the SQUARE ROOT of the number?
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	printf("Enter the value of x=");
	scanf("%d",&x);
	float y;
	y=sqrt(x);
	printf("Square root of %d is =%.1f",x,y);
}*/

/*//Q2)wap that prints the POWER of a number?
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	int p;
	p=pow(x,y);
	printf("Result = %d",p);
}*/

/*//Q3)wap that prints fmod() ?(Output: prints remainder)
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	int p;
	p=fmod(x,y);
	printf("Result = %d",p);
}*/

/*//Q4)wap that prints CEIL() ?
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Enter the value of x =");
	scanf("%f",&x);
	float p;
	p=ceil(x);
	printf("Result = %.1f",p);
}*/

/*//Q5)wap that prints floor() ?
//floor built functions
#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf("Enter the values of the x:");
    scanf("%f",&x);
    float p;
        p=floor(x);
    printf("The power %.1f is %.1f",x,p);
}*/

/*//Q6)wap that prints fabs() ?
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	printf("Enter the value of x =");
	scanf("%d",&x);
	int y;
	y=fabs(x);
	printf("Absolute value = %d",y);
}*/

/*//Q7)wap that prints log() ?
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Enter the value of x =");
	scanf("%f",&x);
	float y;
	y=log(x);
	printf("Natural log value = %.1f",y);
}*/

/*//Q8)log10() ?
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Enter the value of x =");
	scanf("%f",&x);
	float y;
	y=log10(x);
	printf("Natural log value = %.1f",p);
}*/

/*//Q9)wap that prints exp() ?
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Enter the value of x =");
	scanf("%f",&x);
	float y;
	y=exp(x);
	printf("Result = %.1f",y);
}*/

/*//Q10)wap in c that calculate the sum of first and last digit from the input?
#include<stdio.h>
#include<math.h>
int SUM(int n);
int main()
{
	int x;
	printf("Enter the value of x =");
	scanf("%d",&x);
	int r = SUM(x);
	printf("SUM of first and last digit is = %d",r);
}
int SUM(int n)
{
	int L,F;
	int m=log10(n);
	L=n%10;
	F=n/pow(10,m);
	return L+F;
}*/

/*//Q11)wap using functions that calculates and check and prints the total count of odd,even,prime numbers in the input?
#include<stdio.h>
#include<math.h>

int prime(int p); //1 or -1
int evenodd(int p); // 1 ot 2
int main()
{
    int x;
    
    printf("Enter 'x' value : ");
    scanf("%d",&x);

    int rem,r1,r2;
    int e = 0,pr = 0,o = 0;
    while(x > 0)
    {
        rem = x % 10;
        r1 = prime(rem);
        if(r1 == 1)
        {
            pr++;
        }
        r2 = evenodd(rem);
        if(r2 == 2)
        {
            e++;
        }
        else
        {
            o++;
        }
        x = x/10;
    }
    printf("Even Count is = %d\n",e);
    printf("Odd count = %d\n",o);
    printf("Prime count = %d\n",pr);
}
int prime(int p)
{
    int i,c = 0;
    for(i = 1;i<=p;i++)
    {
        if(p % i == 0){
            c++;
        }
    }
    if(c == 2)
    {
        return 1;
    }
    else{
        return -1;
    }
}

int evenodd(int p)
{
    if(p % 2 == 0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}*/

/*//Q12)wap using functions in c that count the sum of each digit of x and factorial of digit x?
#include<stdio.h>
int sum(int p);
int factorial(int p);
int main()
{
	int x;
	int y;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	int t=0;
	y=x;
	int r2;
	int r1=sum(x);
	printf("Total sum = %d",r1);
	int rem;
	while(y>0)
	{
		rem=y%10;
		r2=factorial(rem);
		printf("\nFactorial of %d is = %d",rem,r2);
		y=y/10;
	}
}
int sum(int p)
{
	int r;
	int t=0;
	while(p>0)
	{
		r=p%10;
		t=t+r;
		p=p/10;
	}
	return t;
}
int factorial(int p)
{
	int f=1;
	int i;
	for(i=1;i<=p;i++)
	{
		f=f*i;
	}
	return f;
}*/
