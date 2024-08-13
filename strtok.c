#include "main.h"

/**
 * main - splits a string into words and prints them
 *
 * Description: This program takes a string, splits it into words using spaces
 * as delimiters, and prints each word on a new line. It then prints the
 * modified string with spaces replaced by null characters.
 *
 * Return: 0 on success
 */
int main(void)
{
	char str[] = "This is a separated word by spaces";
	char *stc = malloc(sizeof(char) * (strlen(str) + 1));
	char delim[5] = " ";
	char *trunks;
	int i;

	strcpy(stc, str);
	trunks = strtok(stc, delim);

	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}

	for (i = 0; i < 35; i++)
	{
		if (stc[i] == '\0')
			printf(" ");
		else
			printf("%c", stc[i]);
	}

	free(stc);

	return (0);
}
