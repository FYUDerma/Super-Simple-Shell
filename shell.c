#include "main.h"

#define MAX_LINE_LENGTH 1024

int main(void)
{
	char line[MAX_LINE_LENGTH];

	while (1)
	{
		printf("$ ");

		if (fgets(line, MAX_LINE_LENGTH, stdin) == NULL)
		{
			break;
		}

		line[strcspn(line, "\n")] = 0;

		if (line[0] == '\0')
		{
			continue;
		}

		if (access(line, X_OK) == 0)
		{
			pid_t pid = fork();

			if (pid == 0)
			{
				execl(line, line, (char *) NULL);
				perror("execl");
				exit(1);
			}
			else if (pid < 0)
			{
				perror("fork");
			}
			else
			{
				wait(NULL);
			}
		}
		else
		{
			printf("Unknown command: %s\n", line);
		}
	}

	return (0);
}
