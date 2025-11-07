#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    float b;
    char c;
    double d;
    short int e;
    unsigned int ui;
    long double ld;
    printf("\n Enter an Integer value: " );
    scanf("%d",&a);
    printf("\n Enter a Float value: " );
    scanf("%f",&b);
    printf("\n Enter a Character: " );
    fflush(stdin);
    scanf("%c",&c);
    printf("\n Enter a Double value: " );
    scanf("%lf",&d);
    printf("\n Enter a Short Integer value: " );
    scanf("%hi",&e);
    printf("\n Enter a Unsigned Integer value: " );
    scanf("%u",&ui);
    printf("\n Enter a Long Double value: " );
    scanf("%Lf",&ld);
    printf("\n Integer: %d \n\n Float: %f \n\n Character: %c \n\n Double: %f",a,b,c,d);
    printf("\n\n Short Integer: %hi \n\n Unsigned Integer: %u \n\n Long Double: %Lf",e,ui,ld);
    getch();
}