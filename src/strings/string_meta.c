/*
**Returns the length of a given string.
*/
unsigned int	len_str(const char* s)
{
	unsigned int	i = 0;

	while (s[i])
		i++;
	return (i);
}

