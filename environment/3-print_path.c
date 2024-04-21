#include "main.h"


int print_path(const char* name)
{
	
	char *var_value = _getenv(name);
	char *argv[100];
	char *token;
	char delim[] = ":";
	int i = 0;

	token = strtok(var_value, delim);
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;

	i = 0;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}




