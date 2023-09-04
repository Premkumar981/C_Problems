//wap that calculates the square root of a number without using the math functions?
/*#include<stdio.h>
int main()
{
	int n=16;
	float temp,sqrt;
	sqrt=n/2;
	temp=0;
	while(sqrt!=temp)
	{
		temp=sqrt;
		sqrt=(n/temp+temp)/2;
	}
	printf("sqrt=%.1f",sqrt);
}*/

//wap using functions that return the sum of numbers without using + operator?
/*#include<stdio.h>
int add(int a,int b);
int main()
{
	int x,y;
	printf("Enter the value of x=");
	scanf("%d%d",&x,&y);
	int s=add(x,y);
	printf("\nSum = %d",s);
}
int add(int a, int b)
{
	while(b!=0)
{
	a++;
	b--;
}
return a;
}*/

//wap that calculate the multiplication without using * ?
/*#include<stdio.h>
int main()
{
	int mul(int x, int y);
	int a,b;
	printf("\nEnter the value of a and b\n");
	scanf("%d%d",&a,&b);
	int m=mul(a,b);
	printf("\nMultiplication = %d",m);
}
int mul(int x, int y)
{
	int t=0;
	int i;
	for (i=1;i<=y;i++)
	{
		t=t+x;
	}
	return t;
}*/

//subtraction without - ?
/*#include<stdio.h>
int sub(int a,int b);
int main()
{
    int a,b;
    printf("Enter 'a' and 'b' here : ");
    scanf("%d %d",&a,&b);
    int r = sub(a,b);
    printf("Result = %d\n",r);
}
int sub(int a,int b)
{
    
    while(b != 0)
    {
        b--;
        a--;
    }
    
    return a;
}*/

//wap that convers lower case letters into uppercase?
/*#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter your full name in lower case\n");
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			str[i]=str[i]-32;
		}
	}
	printf("\nName = %s",str);
}*/

//wap that counts the no.of capital and lower case alphabets and digits and special character in the string?
/*#include<stdio.h>
int main()
{
    char s[10000];
    int c = 0,sm = 0,n = 0,sp = 0,space = 0;
    printf("Enter your string here to run this programe : ");
    gets(s);
    for(int i = 0;s[i] != '\0';i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            c++;
        }
        else if(s[i] >= 97 && s[i] <= 122)
        {
            sm++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            n++;
        }
        else if(s[i] == ' ')
        {
            space++;
        }
        else{
            sp++;
        }
    }
    printf("Total capitals : %d\n",c);
    printf("Total small : %d\n",sm);
    printf("Total number : %d\n",n);
    printf("Total special : %d\n",sp);
    printf("Total spaces : %d\n",space);
    
    return 0;
}*/
