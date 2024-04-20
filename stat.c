#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
	unsigned int i = 0;
	struct stat st;
	char *token;
	char *path = "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin";
	char *argv[100];
	const char *delim = ":";



	token = strtok(path, delim);
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
		printf("%s:", argv[i]);
		if (stat(argv[i], &st) == 0)
		{
			printf(" FOUND\n");
		}
		else 
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
