#include "fortress.h"

/*
**while the provided string is to large to fit in the buffer, it is printed and reduced from the printed amount. When it becomes small enough it is stored into the buffer.
*/
void	disp_and_buf_str_n(const char* str, string_t* buffer, SIZE str_length)
{
	SIZE	str_progress;

	str_progress = BUFFSIZE - buffer->length;
	fill_and_disp_buff(str, buffer, str_progress);
	str_length -= str_progress;
	while (str_length >= BUFFSIZE)
	{
		str_length -= BUFFSIZE;
		do_and_progress_const_str(dry_put_str, str + str_progress, BUFFSIZE, &str_progress);
	}
	buf_str_n(str + str_progress, buffer, str_length);
}

/*
**Puts a string into the buffer. If the string does not fit into the remaining space of the buffer, the buffer is displayed, and again until the remaining string fits.
*/
void		buf_str_n_check(const char* str, string_t* buffer, SIZE str_length)
{
	if (str_length >= BUFFSIZE - buffer->length)
		disp_and_buf_str_n(str, buffer, str_length);
	else
		buf_str_n(str, buffer, str_length);
}

/*
**checks if a char can be added to the given buffer. If not, display the buffer. Adds the char in any case.
*/
void		buf_chr_check(const char c, string_t* buffer)
{
	if (BUFFSIZE - buffer->length == 0)
		disp_buf(buffer);
	buf_chr(c, buffer);
}


