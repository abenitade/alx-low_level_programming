/**
 *
 *  * _memset - function that fills memory with a constant byte.
 *
 *   *
 *
 *    * @s: mamory area to return
 *
 *     * @b: constant byte
 *
 *      * @n: size of bytes
 *
 *       * Return: char
 *
 *        */

#include "main.h"

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
