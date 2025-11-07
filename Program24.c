#include <stdio.h>
#include <conio.h>
struct doj
{
int day;
int month;
int year;
};
struct employee
{
char ename[30];
int eno;
float basic_salary;
struct doj doj;
} emp;
void main()
{
float hra,da,tds,net,gross;
printf("\nEnter the Employee Name: ");
scanf("%s",&emp.ename);
printf("\nEnter the Employee Id: ");
scanf("%d",&emp.eno);
printf("\nEnter the Basic Salary: ");
scanf("%f",&emp.basic_salary);
printf("\n enter employee date of joining:");
scanf("%d", &emp.doj.day);
printf("\n Enter employee month of joining:");
scanf("%d", &emp.doj.month);
printf("\n Enter employee year of joining:");
scanf("%d", &emp.doj.year);
hra=emp.basic_salary*.10;
da=emp.basic_salary*.35;
tds=emp.basic_salary*.15;
gross=emp.basic_salary+hra+da;
net=gross-tds;
printf("\n\nSALARY DETAILS FOR THE MONTH\n");
printf("\n\nEmployee Name\t: %s",emp.ename);
printf("\n\nEmployee No.\t: %d",emp.eno);
printf("\n\nBasic salary\t: %.2f",emp.basic_salary);
printf("\n\nHRA\t\t: %.2f",hra);
printf("\n\nDA\t\t: %.2f",da);
printf("\n\nTDS\t\t: %.2f",tds);
printf("\n\nGross Salary\t: %.2f",gross);
printf("\n\nNet Salary\t: %.2f",net);
printf("\n\nEmployee date of joining:");
printf("%d/%d/%d", emp.doj.day, emp.doj.month, emp.doj.year);
getch();
}