#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
int array[10];
int n, i ,sum = 0;
printf("\nEnter the size of the array = ");
scanf("%d",&n);
printf("Enter the elements of the array one by one\n");
for (i =0 ; i < n ; i++)
{
scanf("%d",array+i);
sum = sum + (*(array+i));
}
for (i =0 ; i < n ; i++)
{
printf("\n Array[%d] = %d \n Address of Array[%d] = %d\n",
i,*(array+i),i,array+i);
}
printf("\n Sum of the array elements: %d \n",sum);
getch();
}