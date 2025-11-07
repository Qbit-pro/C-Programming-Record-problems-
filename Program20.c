//Program 1
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


//Program 2
#include<stdio.h>
void main()
{
char string1[5],string2[5];
int i,temp = 0;
printf("Enter the string1 value:\n");
gets(string1);
printf("\nEnter the String2 value:\n");
gets(string2);
for(i=0; string1[i]!='\0'; i++)
{
if(string1[i] == string2[i])
temp = 1;
else
temp = 0;
}
if(temp == 1)
printf("Both strings are same.");
else
printf("Both string not same.");
getch();
}
