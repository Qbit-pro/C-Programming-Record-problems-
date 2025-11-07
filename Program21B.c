#define SQUARE(n) (n*n)
#define QUAD(n) (2*SQUARE(n)+5*n-7)
void main()
{
int a;
printf("\nEnter the value : ");
scanf("%d",&a);
printf("\nThe quad Value of %d is %d",a,QUAD(a));
getch();
}