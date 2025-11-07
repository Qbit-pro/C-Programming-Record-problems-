#include <stdio.h>
#include <conio.h>
void main()
{
int array[20],t,i,j,n;
printf("\nEnter the size of the array:");
scanf("%d",&n);
printf("Enter the array elements one by one\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(array[i] > array[j])
{
t=array[i];
array[i] = array[j];
array[j] = t;
}
}
}
printf("\n Sorted array \n");
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
}
getch();
}
