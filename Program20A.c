#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
char name1[20];
clrscr();
puts("Enter the two strings one by one");
gets(name);
gets(name1);
if(strcmp(name,name1)==0)
printf("\n Two strings are same\n");
else
printf("\n Two strings are different\n");
getch();
}