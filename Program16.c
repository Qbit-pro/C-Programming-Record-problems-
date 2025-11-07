#include <stdio.h>
#include <conio.h>
void main()
{
int array[20],t,f=0,i,n;
printf("\nEnter the size of the array:");
scanf("%d",&n);
printf("Enter the array elements one by one\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf("\nEnter the element to be searched in the array:");
scanf("%d",&t);
for(i=0;i<n-1;i++)
{
if(t == array[i])
{
f=1;
printf("\n The element %d is present in the given array in %d position\n",t,i+1);
break;
}
}
if(f ==0)
printf("\n The element %d is not present in the given array",t);
getch();
}