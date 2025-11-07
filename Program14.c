#include <stdio.h>
#include <conio.h>
void main()
{
int array[20], i,n,sum = 0;
float avg;
printf("\nEnter the size of the array:");
scanf("%d",&n);
printf("Enter the array elements one by one\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
sum+=array[i];
}
avg = (float)sum/n;
printf("\n Sum of %d numbers stored in the array = %d", n,sum);
printf("\n Average = %f",avg);
getch();
}