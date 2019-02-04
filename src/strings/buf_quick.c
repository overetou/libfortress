#include "fortress.h"

/*
**Puts provided string into the buffer, without verifying if it is to large to fit.
*/
void	buf_str(const char* str, string_t* buffer)
{
		copy_str(str, buffer->content + buffer->length);
		buffer->length += len_str(str);
}

