#include <stdio.h>
#include <conio.h>
void main()
{
char array[100];
int wc=0,i =0;
fflush(stdin);
printf("\nEnter the text:");
do{
array[i] = getchar();
i++;
}while(array[i-1]!='\n');
printf("\n Number of characters in the text = %d",i-1);
i=0;
while (array[i] != '\n')
{
if(array[i] == ' ')
wc++;
i++;
}
printf("\n Number of words in the given text is %d ", ++wc);
getch();
}