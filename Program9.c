#include <stdio.h>
#include <conio.h>
void main()
{
int a, b, c;
printf("\n Enter the three numbers: ");
scanf("%d %d %d", &a, &b, &c);
printf("\n a = %d b = %d c = %d", a, b, c);
if(a>b)
{
    if(a>c)
    {
        printf("\n\nThe biggest number (a) = %d", a);
    }
    else{
        printf("\n\nThe biggest number (c) = %d", c);
    }
}
else
{
    if (b>c)
    {
        printf("\n\nThe biggest number (b) = %d", b); 
    }
    else{
        printf("\n\nThe biggest number (c) = %d", c);
    }
}
getch();
}

// program 2
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
// int a, b, c;
// printf("Enter three numbers\n");
// scanf("%d %d %d",&a,&b,&c);
// if(a>b && a>c)
// {
// printf("\n %d is greatest\n",a);
// }
// else if(b>a && b>c)
// {
// printf("\n %d is greatest\n",b);
// }
// else
// {
// printf("\n %d is greatest\n",c);
// }
// getch();
// }