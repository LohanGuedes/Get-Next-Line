#include "get_next_line.h"
#include <stdio.h>

size_t strfnl(char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *read_fl(int fd);

char *get_next_line(int fd)
{
	static char *work; //Working string
	char *result;

	work = read_fl(fd);
	result = ft_substr(work, 0, (strfnl(work) + 1));
	return (result);
}

char *read_fl(int fd)
{
	char *buffer;
	char *work;
	int rbamount;

	rbamount = 1;
	work = NULL;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!buffer)
		return NULL;
	while (!ft_strchr(work, '\n') && rbamount)
	{
		rbamount = read(fd, buffer, BUFFER_SIZE);
		buffer[rbamount] = '\0';
		work = ft_strjoin(work, buffer);
	}
	return (work);
}

size_t strfnl(char *s)
{
	int offset;

	offset = 0;
	while (s[offset++])
		if(s[offset] == '\n')
			return offset;
	return offset;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i_start;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	i_start = 0;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && i_start < len)
			substr[i_start++] = s[i];
		i++;
	}
	substr[i_start] = '\0';
	return (substr);
}
