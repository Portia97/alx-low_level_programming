#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character C to stdout
 * @: The character to print
 *
 * Return: On Success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
