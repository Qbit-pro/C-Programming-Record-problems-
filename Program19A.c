#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char firststring[20];
char secondstring[20];
clrscr();
puts("Enter the two strings one by one");
gets(firststring);
gets(secondstring);
printf("\n Firststring: ");
puts(firststring);
printf("\n Secondstring: ");
puts(secondstring);
strcat(firststring,secondstring);
printf("\n Conccatenated string : ");
puts(firststring);
getch();
}