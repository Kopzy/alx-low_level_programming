#include "main.h"
/**
 * *_strcat - A function to concate two strings
 *
 * @dest: string destination for concatenates
 *
 * @src: string source code to be concatenated
 *
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	_putchar(dest);

	return (dest);
