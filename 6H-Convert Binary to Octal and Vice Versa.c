/* C programming source code to convert either binary to octal or octal to binary according to data entered by user. */

#include <stdio.h>
#include <math.h>
int binary_octal(int n);
int octal_binary(int n);
int main()
{
    int n;
    char c;
    printf("Instructions:\n");
    printf("1. Enter alphabet 'o' to convert binary to octal.\n");
    printf("2. Enter alphabet 'b' to convert octal to binary.\n");
    scanf("%c",&c);
    if ( c=='o' || c=='O')
    {
        printf("Enter a binary number: ");
        scanf("%d",&n);
        printf("%d in binary = %d in octal", n, binary_octal(n));
    }
    if ( c=='b' || c=='B')
    {
        printf("Enter a octal number: ");
        scanf("%d",&n);
        printf("%d in octal = %d in binary",n, octal_binary(n));
    }
    return 0;
}
int binary_octal(int n)  /* Function to convert binary to octal. */
{
    int octal=0, decimal=0, i=0;
    while(n!=0)
    {
        decimal+=(n%10)*pow(2,i);
        ++i;
        n/=10;
    }

/*At this point, the decimal variable contains corresponding decimal value of binary number. */

    i=1;
    while (decimal!=0)
    {
        octal+=(decimal%8)*i;
        decimal/=8;
        i*=10;
    }
    return octal;
}
int octal_binary(int n)  /* Function to convert octal to binary.*/
{
    int decimal=0, binary=0, i=0;
    while (n!=0)
    {
        decimal+=(n%10)*pow(8,i);
        ++i;
        n/=10;
    }
/* At this point, the decimal variable contains corresponding decimal value of that octal number. */
    i=1;
    while(decimal!=0)
    {
        binary+=(decimal%2)*i;
        decimal/=2;
        i*=10;
    }
    return binary;
}