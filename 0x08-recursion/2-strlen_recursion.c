#include "holberton.h"
/**
 * _strlen_recursion - prints a string then newline
 * @s: string to print
 * Return: 0 or length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
