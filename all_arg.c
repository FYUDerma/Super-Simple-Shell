#include "main.h"

/**
 * main - Print the sum of all arguments
 * @ac: count of the variable
 * @av: vector of the variable
 * Return: Return the sum
 */
int main(int ac, char **av)
{
	int i = 0;

	while (*av != NULL)
	{
		printf("argv[%d] : %s\n", i, *av);
		av++;
		i++;
	}
	return (0);
}
