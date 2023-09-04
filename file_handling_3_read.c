#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("prem.txt","r");
    char ch;
    do
    {
        ch=fgetc(fp);
        printf("%c",ch);
    } while (ch!=EOF);
    fclose(fp);
    
}