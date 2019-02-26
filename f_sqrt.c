#include <stdio.h>
#include <unistd.h>

//--ok
float	squrt_1(const float n)
{
	if (n < 2)
		return (n);
	float s = 2;
	while (n / s > s)
		s++;
	return (s * s == n ? s : s - 1);
}

//--ok
float	find_divider(float n, float stop)
{
	float	d = 1;

	while (n / d >= stop)
		d *= 10;
	return (d);
}

//--ok
float	find_piece(const float part, const float limit, float *candidate)
{
	unsigned int	piece;

	piece = 0;
	while ((part + piece) * piece <= limit)
		piece++;
	piece -= 1;
	*candidate = (part + piece) * piece;
	return (piece);
}

float	sqrt_past_point(float n, float remain, float result, unsigned int multiplier)
{
	char		i;
	float		last_piece;
	float		candidate;

	i = 0;
	candidate = 0;
	while (i != 6)
	{
		n = (n - (unsigned int)n) * 100;
		remain = (remain - candidate) * 100 + (unsigned int)n;
		last_piece = find_piece(result * multiplier * 20, remain, &candidate);
		multiplier *= 10;
		result += last_piece / multiplier;
		i++;
	}
	return (result);
}

//--ok
float	squrt_2(float n, char is_par)
{
	float	result;
	float	divider;
	float	remain;
	float	candidate;
	float	last_piece;

	divider = find_divider(n, (is_par ? 100 : 10));
	remain = (unsigned int)(n / divider);
	n -= remain * divider;
	result = squrt_1(remain);
	candidate = result * result;
	while (divider != 1)
	{
		divider /= 100;
		remain = (remain - candidate) * 100 + (long unsigned int)(n / divider);
		n -= (long unsigned int)(n / divider) * divider;
		last_piece = find_piece(result * 20, remain, &candidate);
		result = result * 10 + last_piece;
	}
	return (sqrt_past_point(n, remain - candidate, result, 1));
}

int	main(void)
{
	float test = 16;
	printf("%f\n", squrt_2(874.56, 0));
	//printf("%f\n", squrt(57526506052129));
	//printf("%lu\n", smaller_modulo(57526506052129));
	return (0);
}

