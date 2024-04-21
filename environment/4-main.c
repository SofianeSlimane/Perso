#include "main.h"




int main(void)
{
	list_t *head = NULL;
	list_t *newNode;
	const char *var = "PATH";
	char *var_value = _getenv(var);
	char argv[100];
	char *token;
	char delim [] = ":";
	int i = 0;
	int array_length;

	token = strtok(var_value, delim);
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;

	while(argv[i] != NULL)
	{
		i++;
	}
	array_length = i;
	i = 0;

	while (i < array_length)
	{
		newNode = path_list(argv[i]);
		newNode->next = head;
		head = newNode;
	}



		
