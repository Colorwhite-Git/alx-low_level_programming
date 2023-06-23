#include "main.h"
#include <unistd.h>
/**
 * _putchar - the code specifies the character c to stdout
 * @c: print the character
 * Return: 1
 * on error, -1 is returned & error is applicable
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
