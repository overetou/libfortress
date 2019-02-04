#include "fortress.h"

void	buf_str_n_c(string_t* buffer, const char* str, SIZE length, char c)
{
	buf_str_n(str, buffer, length);
	buf_chr(c, buffer);
}

void	buf_str_n_c_check(string_t* buffer, const char* str, SIZE length, char c)
{
	buf_str_n_check(str, buffer, length + 1);
	buffer->content[buffer->length - 1] = c;
}

