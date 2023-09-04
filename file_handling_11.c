#include<stdio.h>
int main()
{
    FILE * fp;
    fp = fopen("K22DM.txt","w");
    fputs("This is sechon K22DM",fp);
    fseek(fp,7,SEEK_SET);
    fputs("***",fp);
    fclose(fp);
}