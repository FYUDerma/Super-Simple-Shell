#ifndef MAIN_H
#define MAIN_H

/* Librairies */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int arg(int ac, char **av);
int prompt(void);
char _strtok(const char *str, char delimeter);

#endif
