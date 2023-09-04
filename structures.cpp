/*//Q1)Structure as a array
#include<stdio.h>
struct Books
{
	char name[30];
	int price;
	int pages;
	char author[30];
    };//structure
    
int main()
{
	struct Books b[10];
	int i;
	printf("\n Enter the record of books");
	for(i=0;i<10;i++)
	{
		printf("\n Enter the record of the book=%d",i+1);
		printf("\n Enter the book name=");
		fflush(stdin);//to clear the buffet
		gets(b[i].name);
		printf("\n Enter book price=");
		scanf("%d",&b[i].price);
		printf("\n Enter book pages=");
		scanf("%d",&b[i].pages);
		fflush(stdin);
		printf("\n Enter author name=");
		gets(b[i].author);
		printf("\n");
	}
	printf("\n Print record \n");
	for(i=0;i<10;i++)
	{
		printf("\n Book name=%s",b[i].name);
		printf("\n Book price=%s",b[i].price);
		printf("\n Book pages=%s",b[i].pages);
		printf("\n Book author=%s",b[i].author);
		printf("\n");
	}
}*/

/*//Q2)wap that having structure which save the record of 5 students containing name,reg.no and cgpa ; print the record of that student how have higher cgpa among them?
#include <Stdio.h>
struct student{
    char name[10];
    int regno;
    int rollno;
    float cgpa;
};
int main(void){
    int n;
    printf("Enter the no.of record");
    scanf("%d",&n);
    struct student s[n];
    int i;
    printf("Enter the student records");
    for(i=0;i<n;i++){
        fflush(stdin);
        printf("\n Enter the name:");
        gets(s[i].name);
        printf("\nEnter the regno:");
        scanf("%d",&s[i].regno);
        printf("\nEnter the rollno:");
        scanf("%d",&s[i].rollno);
        printf("\nEnter the CGPA:");
        scanf("%f",&s[i].cgpa);
        printf("\n");
        
    }
    int mx=s[0].cgpa;
    char sn[40];
    strcpy(sn,s[0].name);
    int r=s[0].regno;
    for(i=0;i<n;i++){
        if(mx<s[i].cgpa){
            mx=s[i].cgpa;
            strcpy(sn,s[i].name);
            r=s[i].regno;
        }
    }
        printf("\nThe highest CGPA student details are:");
        printf("\nName=%s",sn);
        printf("\nregno=%d",r);
}*/

//
