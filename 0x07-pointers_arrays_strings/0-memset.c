#include "main.h"

/**
 *
 *  * _memset - fills memory with a constant byte,
 *
 *   * @s: memory area.
 *
 *    * @b: constant byte.
 *
 *     * @n: bytes filled.
 *
 *      * Return: the pointer to dest.
 *
 *       */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
