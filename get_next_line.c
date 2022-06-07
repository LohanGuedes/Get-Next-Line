#include "get_next_line.h"
#include <stdio.h>

/*
** Get next line function breakdown
**
** 1. Check buffer until you find the new line - return len of line or 0 if no \n
**
*/

char *get_next_line(int fd)
{
	static char *work; //Working string
	char *buffer;
	int rbamount;

	rbamount = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!buffer)
		return NULL;
	while (!ft_strchr(work, '\n') && rbamount)
	{
		rbamount = read(fd, buffer, BUFFER_SIZE);
		buffer[rbamount] = '\0';
		work = ft_strjoin(work, buffer);
		printf("rbamount: %d\n", rbamount);
	}
	printf("work: %s\n", work);
	return (work);
}


/* char *getnl(char *buffer, int fd) */
/* { */
/* 	char *temp; */
/* 	if(!strfnl(buffer)) */
/* 	{ */
/* 		read(fd, buffer, BUFFER_SIZE); */
/* 	} */
/* } */

/*
** aaaa\n
** bbbbbbb\n
** cccc\n
** dd\n
**
**
** "aaaa\n -bbbb\0"
**
*/
