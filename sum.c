#include "main.h"

/**
 * main - Print the sum of all arguments
 * @ac: count of the variable
 * @av: vector of the variable
 * Return: Return the sum
 */
int main(int ac, char **av)
{
	int i = 1;
	int sum = 0;

	while (i < ac)
	{
		printf("av[%d}: %s\n", i, av[i]);
		sum += atoi(av[i]);
		i++;
	}
	printf("Sum of the Arguments: %d\n", sum);
	return (0);
}
