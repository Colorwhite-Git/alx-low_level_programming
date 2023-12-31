#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal
 * Description: Use only _putchar function to print
 * @n: number of times the character '_' should be printed
 * End line with '\n'
 */

void print_line(int n)
{
        int i;

        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (i = 1; i < n; i++)
                {
                        _putchar('_');
                }
                _putchar('\n');
        }
}
