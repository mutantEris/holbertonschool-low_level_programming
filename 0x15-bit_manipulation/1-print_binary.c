#include "holberton.h"

/**
 * print_binary - prints a binary
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
