#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
	char *buffer;
	char *token;
	const char* delim = " \n";
	size_t size = 0;
	char *argv[] = {"/bin/ls", NULL};
	int i = 0;
	while(1)
	{
		printf("$ ");
		if (getline(&buffer, &size, stdin) == -1)
		{
			return (-1);
		}
		
		token = strtok(buffer, delim);
		while (token != NULL)
		{
			argv[i] = token;
			token = strtok(NULL, delim);
			i++;
		}
		argv[i] = NULL;

		
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
			exit(0);
		}
	}

}
