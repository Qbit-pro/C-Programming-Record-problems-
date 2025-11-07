#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
int *array = NULL; //pointer to integer
int n = 0; //Variable store number of block
int i ,sum = 0;
printf("\nEnter the number of block = ");
scanf("%d",&n); //Get input for number of block
array = (int *)malloc(n * sizeof(int));
printf("Enter the elements of the array one by one\n");
for (i =0 ; i < n ; i++)
{
scanf("%d",array+i);
sum+= *(array+i);
}
for (i =0 ; i < n ; i++)
{
printf("\narray[%d] = %d\n", i,array[i]);
}
printf("\n Sum of the array elements: %d \n",sum);
free(array); // free allocated memory
getch();
}