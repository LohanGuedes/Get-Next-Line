#ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H
#	include <unistd.h>
#	include <stdlib.h>

#	ifndef BUFFER_SIZE
#		define BUFFER_SIZE 1
#	endif

size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *work_str, char *buff);
char	*read_fl(int fd, char *work);
char	*strgln(char *work);
char	*strgal(char *work);

#endif
