#include <stdio.h>
#include <conio.h>
void main()
{
int a, b, h, r, area, volume;
float area1, vol,pi=3.144;
printf(" \n Enter the side of a square :");
scanf("%d",&a);
area = a*a;
volume = a*a*a;
printf("\n Area of a square = %d",area);
printf("\n Volume of a square = %d",volume);
printf("\n\n Enter length, breadth and height of a rectangle : ");
scanf("%d %d %d",&a,&b, &h);
area = a*b;
volume = a*b*h;
printf("\n Area of a rectangle = %d ", area);
printf("\n Volume of a rectangle = %d",volume);
printf("\n\n Enter the radius of a circle: ");
scanf("%d",&r);
area1 = pi*r*r;
vol = pi*r*r*r;
printf("\n\n Area of circle = %f ",area1);
printf("\n Volume of a circle = %f",vol);
getch();
}