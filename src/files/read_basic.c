#include "fortress.h"
#include <fcntl.h>

/*
**Open a file and fills the buffer with the specified amount of chars read from the file. Returns the file descriptor.
*/
int		open_and_read_n(const char* file_name, char* buffer, SIZE lenstr)
{
	int	fd;
	fd = open(file_name, O_RDONLY);
	read(fd, buffer, lenstr);
	return (fd);
}

/*
**wtf?
*/
BOOL	compare_read(const char *str, SIZE length)
{
	char	buffer[length];

	return (str_match(buffer, str));
}
