#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Student.txt","w");
    char name[40];
    int age;
    char MOB[11];
    char ADD[100];
    printf("\nEnter the name of student = ");
    fflush(stdin);
    gets(name);
    printf("\nEnter age = ");
    scanf("%d",&age);
    fflush(stdin);
    printf("\nEnter mobile 10 digits = ");
    gets(MOB);
    fflush(stdin);
    printf("\nEnter Address = ");
    gets(ADD);
    fprintf(fp,"%s",name);
    fprintf(fp,"%s","\n");
    fprintf(fp,"%d",age);
    fprintf(fp,"%s","\n");
    fprintf(fp,"%s",MOB);
    fprintf(fp,"%s","\n");
    fprintf(fp,"%s",ADD);
    fclose(fp);
    int L=0;
    int U=0;
    int D=0;
    int S=0;
    char ch;
    fp = fopen("Student.txt","r");
    do
    {
        ch = fgetc(fp);
        if (ch>=97&&ch<=122)
        {
            L=L+1;
        }
        else if(ch>=65 && ch<=90)
        {
            U=U+1;
        }
        else if(ch>=48 && ch<=57)
        {
            D=D+1;
        }
        else{
            S=S+1;
        }
    }
    while(ch!=EOF);
    fclose(fp);
    printf("\nLower case = %d",L);
    printf("\nUpper case = %d",U);
    printf("\nDigits = %d",D);
    printf("\nSpecial = %d",S);
    
}