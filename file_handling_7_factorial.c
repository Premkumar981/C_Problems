//wap that print the factorial of 1 to 10 on the file
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("factorial.txt","w");
    int i,j;
    int fact=1;
    for (i = 1; i <=10; i++)
    {
        fact=1;
        for ( j = 1; j <=i; j++)
        {
            fact=fact*j;
        }
        fprintf(fp,"%s","Facorial = ");
        fprintf(fp,"%d",fact);
        fprintf(fp,"%s","\n");
        
    }
    fclose(fp);
}