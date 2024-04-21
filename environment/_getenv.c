#include <stdio.h>
#include "main.h"

extern char** environ;
char *_getenv(const char *name)
{
	unsigned int i = 0, j = 0;
	char *token;
	char *delim = "=";
	int len = _strlen(name);
	char *store_env;

	while (environ[i] != NULL)
	{
		store_env = environ[i];
		while (j <= len && name[j] == store_env[j])
		{
			if (name[j] != store_env[j] && name[j] != '\0' && store_env[j] != '=')
			{
				break;
			}
			if (name[j] == '\0' && store_env[j] == '=')
			{
				return (&store_env[j + 1]);
			}
			j++;
			
		}
		i++;

		
	}
	return (NULL);
}
