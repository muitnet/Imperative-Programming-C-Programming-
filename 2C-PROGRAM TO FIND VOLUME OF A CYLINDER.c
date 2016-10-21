#include<stdio.h>
#include<conio.h>

void main()
{
    float vol,pie=3.14;
    float r,h;
    clrscr();
    printf("ENTER THE VALUE OF RADIOUS :- ");
    scanf("%f",&r);
    printf("ENTER THE VALUE OF HEIGHT :- ");
    scanf("%f",&h);
    vol = pie * r * r * h;
    printf("VOLUME OF CYLINDER IS :- %3.2f ",vol);
    getch();
}