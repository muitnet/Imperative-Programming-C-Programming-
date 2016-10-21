#include <stdio.h>

int main(void)
{

int sum;
float money;
char letter;
double pi;

sum = 10; /* assign integer value */
money = 2.21; /* assign float value */
letter = ‘A’; /* assign a character value */
pi = 2.01E+6; /* assign a double value */

printf(“ value of sum = %d\n”, sum);
printf(“ value of money = %f\n”, money);
printf(“ value of letter = %c\n”, letter);
printf(“ value of double = %e\n”, pi);

return 0;

}