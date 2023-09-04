#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("prem.txt","w");
    fprintf(fp,"%s","Prem");
    fprintf(fp,"\n");
    fprintf(fp,"%d",12345);
    fclose(fp);
}