#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	int returnValue;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	
	returnValue = execve(argv[0], argv, NULL);
	if (returnValue == -1)
	{
		printf("Error");
	}
	printf("After execve\n");
	return (0);
}
