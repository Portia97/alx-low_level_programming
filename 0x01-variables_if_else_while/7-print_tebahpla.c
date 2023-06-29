#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char alphabets = 'z';

while (alphabets >= 'a')
{
putchar(alphabets);
alphabets--;
}
putchar('\n');
return (0);
}
