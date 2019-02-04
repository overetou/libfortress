#include "fortress.h"

/*
**prints a given message and launches the given function.
*/
void	msg_and_func(const char* msg, void(*func)(void))
{
	put_str(msg);
	func();
}

/*
**Prints a given string a given number of times. the size of the string must be given.
*/
void	dry_put_n_times_str(const char* str, SIZE str_length, SIZE n)
{
	while (n)
	{
		dry_put_str(str, str_length);
		n--;
	}
}

/*
**Prints a given string a given number of times.
*/
void	put_n_times_str(const char* str, SIZE n)
{
	dry_put_n_times_str(str, len_str(str), n);
}

/*
**display a string and puts an arrow under its s'th char.
*/
void	put_arrow(const char* str, SIZE s)
{
	put_endl_str(str);
	put_n_times_str(" ", s);
	put_endl_str("^");
}

