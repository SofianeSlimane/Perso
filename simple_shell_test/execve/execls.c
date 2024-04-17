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
	int status;
	id = fork();
	if (id != 0)
	{
		 wait(&status);
		 id2 = fork();
		 if (id2 != 0)
		 {
			 wait(&status);
			 id3 = fork();
		 }
		 if (id3 != 0)
		 {
			 wait(&status);
			 id4 = fork();
		 }
		 if (id4 != 0)
		 {
			 wait(&status);
			 
		 }

	}
		 
		
	
	
	
	if (execve(argv[0], argv, NULL) == -1)
	{
		printf("Error");
	}
	return (0);
}
