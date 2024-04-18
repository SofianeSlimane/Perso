#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
	char *buffer, token;
	const char* delim = " \n";
	const char* delim2 = " ";
	size_t size = 0;
	int i = 0;
	char *argv[] = NULL;

	while(1)
	{
		printf("$ ");
		if (getline(buffer, size, stdin) == -1)
		{
			return (-1);
		}
		
		token = strtok(buffer, delim);
		while (token != NULL)
		{
			token = strtok(NULL, delim);
		}
		token = strtok(token, delim2);
		while (token != NULL)
		{
			argv[i] = 
		while (argv[i] != NULL)
		{
			argc[i] = token;
		
		if (execve(av[0], av, NULL) == -1)
		{
			perror("Error");
			exit(0);
		}
	}


