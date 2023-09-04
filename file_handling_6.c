#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo.txt","a");
    fprintf(fp,"%s","\nHELLO");
    fprintf(fp,"%s","\nTATA BYE BYE");
    fprintf(fp,"%s","\nGOOD BYE");
    fclose(fp);
    fp=fopen("demo.txt","r");
    char data[30];
    while (!feof(fp))
    {
        fgets(data,30,fp);
        printf("\n%s",data);
    }
    fclose(fp);
    
}
