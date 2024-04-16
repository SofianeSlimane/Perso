#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[] = "Sofiane, Slimane, 20 years old";
	char delim[] = ",";
	char *token;
	int i = 0;
	
	token = strtok(str, delim);
	while(token != NULL)
	{
	printf("%s", token);
	token = strtok(NULL, delim);
	}
	return (0);
}
