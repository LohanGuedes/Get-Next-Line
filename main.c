#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
	int fd;
	char *returned;

	returned = NULL;
	fd = open("./test1.txt", O_RDONLY);

	for(int i = 2; i < 14; i++)
	{
		returned = get_next_line(fd);
		printf("%d - %s", i, returned);
		free(returned);
	}
	close(fd);
	return (0);
}
