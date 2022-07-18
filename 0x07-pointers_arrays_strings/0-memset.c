/*
 * File: 0-memset.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}
