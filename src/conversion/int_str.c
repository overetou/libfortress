#include "fortress.h"

/*
**Returns the size of the string corresponding to n.
*/
int		get_size_nb(int n)
{
	int	size;

	size = 1;
	while ((n /= 10))
		size++;
	return (size);
}

/*
**Returns n max multiplier.
*/
int		get_mult_nb(const int n)
{
	int	mult;

	mult = 1;
	while ( n / mult > 9)
		mult *= 10;
	return (mult);
}

/*
**fills a tab of 2 ints with the max multiplier of n and the size of its corresponding string. The same loop can  be used for the two of them.
*/
void	get_mult_and_size(const int n, int* mult_and_size)
{
	*mult_and_size = 1;
	mult_and_size[1] = 1;
	while (n / *mult_and_size > 9)
	{
		*mult_and_size *= 10;
		mult_and_size[1]++;
	}
}

/*
**Fills the provided string with a string corresponding to the given number.
*/
void	int_to_str(int n, char* to_fill, SIZE n_size)
{
	int	last_n;
	char digits[10];

	copy_str("0123456789", digits);
	while (n_size)
	{
		last_n = n / n_size;
		*to_fill = digits[last_n];
		to_fill++;
		n -= last_n * n_size;
		n_size /= 10;
	}
}

