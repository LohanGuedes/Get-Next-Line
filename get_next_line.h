#ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H
#	include <unistd.h>
#	include <stdlib.h>

#	ifndef BUFFER_SIZE
#		define BUFFER_SIZE 32
#	endif

size_t	strfnl(char *s);
size_t	ft_strlen(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*read_fl(int fd, char *work);
char	*ft_strchr(char *s, int c);
char	*get_next_line(int fd);
char	*ft_strjoin(char *work_str, char *buff);
char	*strcfln(char *work);

#endif
