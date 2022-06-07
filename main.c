#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
	int fd;
	char *returned;

	fd = open("./test1.txt", O_RDONLY);
	returned = get_next_line(fd);
	printf("%s", returned);
	return (0);
}
