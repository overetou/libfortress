#include "fortress.h"

/*
**Creates a string, put the number under ascii form in it, and sends it in the buffer via secured way.
*/
void	buf_int_check(const int n, string_t* buffer, int* mult_and_size)
{
	char	str[mult_and_size[1]];

	int_to_str(n, str, *mult_and_size);
	buf_str_n_check(str, buffer, mult_and_size[1]);
}

/*
**Provides a quick way to put an int into the buffer into a secured way. May or may not be Dry compliant : if you already possess info, use buf_int_check. Else use this func.
*/
void	quick_buf_int_check(const int n, string_t* buffer)
{
	int	mult_and_size[2];

	get_mult_and_size(n, mult_and_size);
	buf_int_check(n, buffer, mult_and_size);
}

/*
**Puts an int into the buffer, checking oversize matter.
*/
void	buf_int(const int n, string_t* buffer)
{
	int	mult_and_size[2];

	get_mult_and_size(n, mult_and_size);
	int_to_str(n, buffer->content, *mult_and_size);
	buffer->length += mult_and_size[1];
}
