#include "get_next_line.h"
#include <stdio.h>

/*
** Get next line function breakdown
**
** 1. Check buffer until you find the new line - return len of line or 0 if no \n
*/

char *get_next_line(int fd)
{
	static char *trash;
	char *final;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	return final;
}

char *save_after_nl(char *buffer, int i_nl)
{
	char *after;
	after = ft_substr(buffer, buffer[i_nl + 1], BUFFER_SIZE);
	return after;
}

char *getnl(char *buffer, int fd)
{
	char *temp;
	if(!strfnl(buffer))
	{
		read(fd, buffer, BUFFER_SIZE);
	}


}
