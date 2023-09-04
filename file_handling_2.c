//Q1)wap to store details in another file named as prem.txt
#include<stdio.h>
int main()
{
    FILE *fp;
    char name[40];
    int reg;
    char Branch[20];
    int rno;
    printf("\n Enter student name = ");
    gets(name);
    printf("Enter student reg = ");
    scanf("%d",&reg);
    fflush(stdin);
    printf("\n Enter Branch = ");
    gets(Branch);
    printf("\n Enter rno = ");
    scanf("%d",&rno);
    fp = fopen("prem.txt","w");
    fprintf(fp,"%s","Name = ");
    fprintf(fp,"%s",name);
    fprintf(fp,"%s","\n Reg = ");
    fprintf(fp,"%d",reg);
    fprintf(fp,"%s","\n Branch = ");
    fprintf(fp,"%s",Branch);
    fprintf(fp,"%s","\nRoll.no = ");
    fprintf(fp,"%d",rno);
    fclose(fp);
}