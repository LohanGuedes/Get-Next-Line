#ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H
#	include <unistd.h>
#	include <stdlib.h>

#	ifndef BUFFER_SIZE
#		define BUFFER_SIZE 12
#	endif

int strfnl(char *s);
char *get_next_line(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
