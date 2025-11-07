#include <stdio.h>
#include <conio.h>
struct student
{
int roll_no, mark1, mark2, mark3, total;
float average;
char name[10],grade;
} stu[5];
void main()
{
int n, i;
printf("\nSTUDENTS RECORDS USING STRUCTURE");
printf("\n Enter total number of record=");
scanf("%d", &n);
for ( i = 0 ; i< n ; i++ )
{
printf("enter %d student details \n",i+1);
printf("\nRoll No.=");
scanf("%d",&stu[i].roll_no);
printf("Name=");
scanf("%s",stu[i].name);
printf("Mark1=");
scanf("%d",&stu[i].mark1);
printf("Mark2=");
scanf("%d",&stu[i].mark2);
printf("Mark3=");
scanf("%d",&stu[i].mark3);
stu[i].total = stu[i].mark1 + stu[i].mark2 + stu[i].mark3;
stu[i].average = stu[i].total / 3;
if(stu[i].average>= 90)
    stu[i].grade='S';
else if(stu[i].average>= 80)
stu[i].grade='A';
else if(stu[i].average>= 70)
stu[i].grade='B';
else if(stu[i].average>= 60)
stu[i].grade='C';
else if(stu[i].average>= 50)
stu[i].grade='D';
else
stu[i].grade='F';
printf("\n ROLL NO. \tNAME \t TOTAL \t AVG\t GRADE \n");
for( i = 0 ; i< n ; i++ )
{
printf("\n %d \t%s \t %d \t%6.2f\t%c",stu[i].roll_no,stu[i].name,stu[i].total,stu[i].average,stu[i].grade);
}
getch();
}