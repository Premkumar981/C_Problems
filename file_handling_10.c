#include<stdio.h>

int main()
{
    char e,n[40];
    char t;

    printf("Enter the file name with extension : ");
    gets(n);

    FILE *fp;

    fp = fopen(n,"r");

    while(e = fgetc(fp != EOF))
    {
        if(e == 'x')
        {
            fseek(fp,-1,1);
            fputc('y',fp);
        }
    }
    fclose(fp);
}