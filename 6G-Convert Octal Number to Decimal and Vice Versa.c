/* C programming source code to convert either octal to decimal or decimal to octal according to data entered by user. */

#include <stdio.h>
#include <math.h>
int decimal_octal(int n);
int octal_deciaml(int n);
int main()
{
   int n;
   char c;
   printf("Instructions:\n"); 
   printf("1. Enter alphabet 'o' to convert decimal to octal.\n");
   printf("2. Enter alphabet 'd' to convert octal to decimal.\n");
   scanf("%c",&c);
   if (c =='d' || c == 'D')
   {
       printf("Enter an octal number: ");
       scanf("%d", &n);
       printf("%d in octal = %d in decimal", n, octal_decimal(n));
   }
   if (c =='o' || c == 'O')
   {
       printf("Enter a decimal number: ");
       scanf("%d", &n);
       printf("%d in decimal = %d in octal", n, decimal_octal(n));
   }
   return 0;
}

int decimal_octal(int n) /* Function to convert decimal to octal */
{
    int rem, i=1, octal=0;
    while (n!=0)
    {
        rem=n%8;
        n/=8;
        octal+=rem*i;
        i*=10;
    }
    return octal;
}

int octal_decimal(int n) /* Function to convert octal to decimal */
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(8,i);
        ++i;
    }
    return decimal;
}