#include <stdio.h>
#include "main.h"

extern char** environ;
char *_getenv(const char *name)
{
	unsigned int i = 0;
	char *token;
	char *delim = "=";

	while (environ[i] != NULL)
	{
		token = strtok(environ[i], delim);
		if (token == name)
		{
			return (token);
		}
		i++;
	}
	return (NULL);
}
