#include <stdio.h>
#include "main.h"

extern char** environ;
char *_getenv(const char *name)
{
	unsigned int i = 0;

	while (environ[i] != NULL)
	{
		if (environ[i] == name)
		{
			return (environ[i]);
		}
		i++;
	}
	return (NULL);
}
