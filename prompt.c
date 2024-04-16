#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer = malloc(sizeof 1024);
	size_t len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s", buffer);
		if (getchar() ==  EOF)
		{
			return(0);
		}
	}
	return (0);	
}