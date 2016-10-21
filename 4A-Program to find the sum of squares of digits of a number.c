#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,sum = 0;
    clrscr();

    printf("Enter the number::  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum += i * i;

    printf("sum  ::  %d",sum);

    getch();
}