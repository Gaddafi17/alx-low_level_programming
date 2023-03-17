#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:Write a program that prints all possible different combinations of two digits.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered the same combination of the two digits 0 and 1
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 *  All your code should be in the main function
 * Return: 0
 */
int main(void)
{
        int c = 0;
        int f_d;
	int 1_d;

	int c2;
        int f_d2;
        int 1_d2;

        while (c <= 98)
        {
                f_d = (c / 10 + '0');
		1_d = (c % 10 + '0');
               	c2 = 0;
		while (c2 <= 99)
		{	
			f_d2 = (c2 / 10 + '0');
			1_d2 = (c2 % 10 + '0');

                        if (c < c2)
                        {
                                putchar(f_d);
                                putchar(1_d);
				putchar(',');
                                putchar(f_d2);
				putchar(1_d2);

				if (c != 98)
                        	{
                                	putchar(',');
                                	putchar(' ');
				}
                        }
                        c2++;

                }
                c++;
	}

        putchar('\n');
        return (0);
}
