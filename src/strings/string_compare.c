#include "fortress.h"

/*
**Returns how many chars the strings are matched.
*/
SIZE	compare_str(const char* str1, const char *str2)
{
	SIZE	i;

	i = 0;
	while(str1[i] && str1[i] == str2[i])
		i++;
	return (i);
}

/*
**Returns true if the string match on the first argument, else false.
*/
BOOL	str_match(const char* str1, const char *str2)
{
	SIZE	i;

	i = 0;
	while (str1[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

/*
**Returns true if strings are equals on all their length, assuming that they stop at first '\0'.
*/
BOOL	str_perfect_match(const char* str1, const char *str2)
{
	return (len_str(str1) == len_str(str2) && str_match(str1, str2));
}

/*
**Returns true if str matches one of the candidates strings.
*/
BOOL	str_equals_any(char* str, char** candidates)
{
	while(*candidates)
	{
		if(str_perfect_match(str, *candidates))
			return (1);
		candidates++;
	}
	return (0);
}
