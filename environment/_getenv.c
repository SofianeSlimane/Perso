#include <stdio.h>
#include "main.h"

extern char** environ;
char *_getenv(const char *name)
{
	unsigned int i = 0, j = 0;
	int len = _strlen(name);


	while (environ[i] != NULL)
	{
		j = 0;
		while (j < len && name[j] == environ[i][j])
		{
			j++;
		}
		if (j == len && environ[i][j] == '=')
		{
			return (&environ[i][j + 1]);
		}
		i++;
	}

		
	return (NULL);
}
