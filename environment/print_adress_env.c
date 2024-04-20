#include <stdio.h>


extern char** environ;
int main(int ac, char **av, char **env)
{
	printf("Adress of env: %p\n", &env);
	printf("------------------------------------------------\n");
	printf("Adress of environ global variable: %p\n", &environ);

	return (0);
}
