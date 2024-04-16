#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	char *buffer;
	size_t size;
	size_t characters;

	buffer = malloc(size * sizeof(char));

	printf("$ ");
	characters = getline(&buffer, &size, stdin);
	printf("%zu number of characters were read\n", characters);
	printf("You typed : %s\n", buffer);

	return (0);
}
