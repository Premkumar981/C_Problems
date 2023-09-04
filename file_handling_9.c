#include<stdio.h>

int main()
{
    FILE *fp,*fp1;

    fp=fopen("file1.txt","w");
    fprintf(fp,"%s","lovely professtional university");

    fclose(fp);

    fp = fopen("file1.txt","r");
    fp1 = fopen("file2.txt","w");

    char ch;

    do
    {
        ch = fgetc(fp);
        if(ch >= 97 && ch <= 122)
        {
            ch = ch - 32;
        }
        fputc(ch,fp1);
    }while(ch!=EOF);

    fclose(fp);
    fclose(fp1);
}