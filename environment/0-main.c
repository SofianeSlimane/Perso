#include "main.h"

extern char** environ;
int main(int ac, char **av, char **env)
{
	const char *var = "PATH";
	char *str = _getenv(var);
	printf("%s", str);
	return (0);
}
