#include "fortress.h"

/*
**Display a message passed as argument and exits.
*/
void	exit_msg(const char* to_disp)
{
	put_endl_str(to_disp);
	exit(0);
}

/*
**If given pointer is NULL, nothing happens. Else, calls exit_msg with passed string.
*/
void		test_ptr_exit(void*	test_ptr, const char* msg)
{
	if (!test_ptr)
		exit_msg(msg);
}


/*
**Exits after displaying a message, and putting an arrow str.
*/
void		exit_arrow(const char* str, SIZE s, const char* msg)
{
	put_endl_str(msg);
	put_arrow(str, s);
	exit(0);
}

