#include <stdio.h>
#include "main.h"

extern char** environ;
char *_getenv(const char *name)
{
	unsigned int i = 0;
	char *token;
	char *delim = "=";
	int len = _strlen(name);
	char *store_env;

	while (environ[i] != NULL)
	{
		store_env = environ[i];
		while (
		
	}
	return (NULL);
}
