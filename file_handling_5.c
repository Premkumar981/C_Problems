//wap to demonstrate the use of fgets and f
//fgets used to read strings from the file
//f
#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demp.txt","w");
    fprintf(fp,"%s","WELCOME");
    fclose(fp);
    fp = fopen("demo.txt","r");
    char data[10];
    if(fgets(data,10,fp)!=NULL)
    {
        printf("%s",data);
    }
    fclose(fp);
}