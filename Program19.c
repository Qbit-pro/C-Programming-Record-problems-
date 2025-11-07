//Program 1
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


//Program 2
#include <conio.h>
#include <string.h>
void main()
{
char string1[30], string2[20];
int i, length=0, temp;
clrscr();
printf("Enter the Value of String1: \n");
gets(string1);
printf("\nEnter the Value of String2: \n");
gets(string2);
for(i=0; string1[i]!='\0'; i++)
length++;
temp = length;
for(i=0; string2[i]!='\0'; i++)
{
string1[temp] = string2[i];
temp++;
}
string1[temp] = '\0';
printf("\nThe concatenated string is:\n");
puts(string1);
getch();
}

