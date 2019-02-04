#include "fortress.h"

/*
**Writes a given char.
*/
void	put_chr(const char c)
{
	write(1, &c, 1);
}

/*
**Writes a given string.
*/
void	put_str(const char* s)
{
	write(1, s, len_str(s));
}

/*
**writes a given amount of chars from the given string.
*/
void	dry_put_str(const char* str, SIZE length)
{
	write(1, str, length);
}

/*
**Writes a given string and an end of line.
*/
void	put_endl_str(const char* s)
{
	put_str(s);
	write(1, "\n", 1);
}

