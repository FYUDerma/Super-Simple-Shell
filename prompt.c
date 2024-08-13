#include "main.h"
#include <stdlib.h>

/**
 * prompt - prints a prompt and reads a line of input
 *
 * Return: 0 on success
 */
int prompt(void)
{
	size_t n = 0;
	char *buf = NULL;

	printf("useradd@LAPTOP-4ACSUI61$ ");
	getline(&buf, &n, stdin);
	printf("%s", buf);

	if (buf != NULL)
	{
		free(buf);
		buf = NULL; /* set to NULL after free */
	}

	return (0);
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	prompt();
	return (0);
}
