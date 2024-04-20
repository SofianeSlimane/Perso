#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include<sys/wait.h>

int main(void)
{
	char *buffer;
	char *token;
	const char* delim = " \n";
	size_t size = 0;
	char **argv = NULL;
	int i = 0;
	int status;
	pid_t pid;
	while(1)
	{
		printf("$ ");
		pid = fork();
		if (pid > 0)
		{
			wait(&status);
		}

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
                if (pid == 0)
                {

                execve(argv[0], argv, NULL);
                }
		
	}
	free(buffer);
	return (0);
		
}
