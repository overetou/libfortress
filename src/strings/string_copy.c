#include "fortress.h"

/*
**Copies a user given mount of chars from a given string into another given string.
*/
void	copy_str_till_n(const char* src, char* dest, SIZE length)
{
	while (length)
	{
		length--;
		dest[length] = src[length];
	}
}

/*
**Copies a string into another string, stopping at source string end. Not protected. Returns copied length ?
*/
void	copy_str(const char* source, char* dest)
{
	int i = 0;

	while(source[i])
	{
		dest[i] = source[i];
		i++;
	}
}

