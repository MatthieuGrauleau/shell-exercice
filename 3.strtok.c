#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buffer = malloc(sizeof 1024);
	size_t len = 1024;
	char *token;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s", buffer);
		token = strtok(buffer, " ");
		while (token != NULL)
		{
			printf("token:%s\n", token);
			token = strtok(NULL, " ");
		}
		
		if (getchar() ==  EOF)
		{
			return(0);
		}
	}
	return (0);	
}