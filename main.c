#include "stdio.h"

void	display_solutions(float* solutions, unsigned int solution_number)
{
	printf("X = %f", *solution);
	if (solution_number == 2)
		printf(" or X = %f", *solution[1]);
}

//Puts the solutions into a tab and returns the number of solutions.
unsigned int launch_resolution(float* values, unsigned int size, float* solutions)
{
	if (size == 0)
		printf("No unknown to be found.\n");
	else if (size == 1)
	{
		resolve_first_degree(values);
		return (1);
	}
	else
		return (resolve_second_degree(values));
	return (0);
}

void	resolve_first_degree(float* values, float* solutions)
{
	*solutions = -*values / values[1];
}

//Values must be sorted by order of power : 0 for constants, 1 for *X, 2 for *X^2.
unsigned int	resolve_second_degree(float* values, float* solutions)
{
	float delta;

	delta = values[1] * values[1] + 4 * values[2] * *values;
	if (delta < 0)
		return (0);
	if (delta)
	{
		delta = square_root_float(delta);
		*solutions = (-values[1] - delta) / (2 * values[2]);
		solutions[1] = (-values[1] + delta) / (2 * values[2]);
		return (2);
	}
	*solutions = -values[1] / (2 * values[2]);
	return (1);
}

int	main(void)
{
	float	values[] = {4, 4, 9.3};
	float	solutions[2];
	unsigned int	solution_number;

	solution_number = launch_resolution(values, 3, solutions);
	display_solutions(solutions, solution_number);
	return (0);
}

