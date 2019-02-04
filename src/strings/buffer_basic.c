#include "fortress.h"

/*
**display buffer content till the end of its legit content, then resets the index of legit content (since there is no more).
*/
void	disp_buf(string_t* buffer)
{
	dry_put_str(buffer->content, buffer->length);
	buffer->length = 0;
}

/*
**Adds a given char to the given buffer. No verification.
*/
void	buf_chr(const char c, string_t* buffer)
{
	buffer->content[buffer->length] = c;
	(buffer->length)++;
}

/*
**Puts provided string into the buffer, without verifying if it is to large to fit.
*/
void	buf_str_n(const char* str, string_t* buffer, SIZE str_length)
{
		copy_str(str, buffer->content + buffer->length);
		buffer->length += str_length;
}

/*
**Sets up an allocated buffer. Here length represents the amount of chars stored into the buffer. The total buffer size should be stored into a #define.
*/
void	set_buffer(string_t* buffer, char* bufstr)
{
	buffer->content = bufstr;
	buffer->length = 0;
}

/*
**Fills the folowing of a buffer with a given string, up to a given length. Then displays it.
*/
void	fill_and_disp_buff(const char* str, string_t* buffer, SIZE s)
{
	copy_str_till_n(str, buffer->content + buffer->length, s);
	dry_put_str(buffer->content, buffer->length + s);
	buffer->length = 0;
}

