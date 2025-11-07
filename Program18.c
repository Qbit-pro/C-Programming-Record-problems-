#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
char a[20], b[20], c[20];
int p=0,r=0,i=0;
int t=0;
int x,g,s,n,o;
puts("Enter First String:");
gets(a);
puts("Enter Second String:");
gets(b);
printf("Enter the position where the second string to be inserted: ");
scanf("%d",&p);
g=p-1;
r = strlen(a);
n = strlen(b);
i=0;
// Copying the input string into another array
while(i<= r)
{
c[i]=a[i];
i++;
}
s = n+r;
o = g+n;
// Adding the sub-string
for(i=g;i<s;i++)
{
x = c[i];
if(t<n)
{
}
a[o]=x;
o=o+1;
}
a[i] = b[t];
t=t+1;
printf("\n Old string: %s\n",c);
printf("\n New String: %s\n", a);
getch();
}