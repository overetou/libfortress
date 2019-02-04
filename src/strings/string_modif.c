#include "fortress.h"

/*
**Put a given char s times into a given string.
*/
void	fill_with_n_c_str(char* str, char c, SIZE s)
{
	while (s)
	{
		s--;
		str[s] = c;
	}
}
