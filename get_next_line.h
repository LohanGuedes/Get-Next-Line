#ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H
#	include <unistd.h>
#	include <stdlib.h>

#	ifndef BUFFER_SIZE
#		define BUFFER_SIZE 1
#	endif

char	*ft_strchr(char *s, int c);
char *get_next_line(int fd);
char	*ft_strjoin(char *work_str, char *buff);
size_t	ft_strlen(char *str);
#endif
