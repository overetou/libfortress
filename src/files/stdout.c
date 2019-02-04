#include "fortress.h"
#define OUTPUT_RECEIVER_FILE ".output"

/*
**Redirect stdout to a file.
*/
void	catch_output(void)
{
	freopen(OUTPUT_RECEIVER_FILE, "w", stdout);
}

/*
**reads from a file to a buffer, closes the file and checks that the string match. Imperfect, needs to be bettered -> perfect match ? continuous open ? That will come with the buffer reform.
*/
BOOL	compare_catched_output(const char* str, SIZE lenstr)
{
	char	buffer[lenstr];

	close(open_and_read_n(OUTPUT_RECEIVER_FILE, buffer, lenstr));
	return (str_perfect_match(buffer, str));
}

/*
**stdout will print to the terminal again.
*/
void	release_output(void)
{
	freopen("/dev/tty", "w", stdout);
}
