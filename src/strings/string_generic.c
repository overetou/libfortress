#include "fortress.h"

/*
**Executes a given function with a given string and a given length as param, the adds the given length to another given pointed length.
*/
void	do_and_progress_str(void(*func)(char*, SIZE), char* str, const SIZE length, SIZE *progress)
{
	func(str, length);
	*progress += length;
}

/*
**Executes a given function with a given const string and a given length as param, the adds the given length to another given pointed length.
*/
void	do_and_progress_const_str(void(*func)(const char*, SIZE), const char* str, const SIZE length, SIZE *progress)
{
	func(str, length);
	(*progress) += length;
}
