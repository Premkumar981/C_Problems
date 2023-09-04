#include<stdio.h>
int main()
{
    char ch;
    FILE *fp,*fp1;
    fp=fopen("prem.txt","r");
    fp1=fopen("newprem.txt","w");
    do
    {
        ch=fgetc(fp);
        fputc(ch,fp1);
    } while (ch!=EOF);
    fclose(fp);
    
}