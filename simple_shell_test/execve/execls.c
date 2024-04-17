#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void)
{
	int id2, id3, id4;
	int id;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status, i;

	i = 0;
	while (i < 5)
	{
		id = fork();
		if (id == 0)
		{
			execve(argv[0], argv, NULL);
			printf("Error");
			exit(0);
		}
		else if (id > 0)
		{
			wait(&status);
		}
		else if (id == -1)
		{
			printf("Child was not created");
			exit(56);
		}
			i++;
		}
	return (0);
}
